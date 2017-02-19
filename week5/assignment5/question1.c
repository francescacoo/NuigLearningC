#include <stdio.h>
#include "listPeakWindSpeed.h" // include the array with the wind speed
#include <time.h>

void bubblesort(float listPeakWindSpeedBubble[SIZE]); // function prototype for the bubble sort
void insertionsort(float listPeakWindSpeedInsertion[SIZE]); // function prototype for the insertion sort

int main(void){

// create the unsorted arrays to pass to the functions
  float listPeakWindSpeedBubble[ SIZE ];
  float listPeakWindSpeedInsertion[ SIZE ];

  for(int i=0; i<SIZE; i++){
    listPeakWindSpeedBubble[i]=listPeakWindSpeed[i];
  }

  for(int i=0; i<SIZE; i++){
    listPeakWindSpeedInsertion[i]=listPeakWindSpeed[i];
  }

  // call the bubblesort function passing the unsorted array
  bubblesort(listPeakWindSpeedBubble);
  // call the insertion sort function passing the unsorted array
  insertionsort(listPeakWindSpeedInsertion);

  return 0;

}

  void bubblesort(float listPeakWindSpeedBubble[SIZE]){
      FILE *bubblesort=fopen("bubblesort.txt","wb");
      int pass; // passes counter
      int i; //comparison counter
      float hold; //temporary location used to swap array elements
      int comparisonNumber=0; // number of comparison
      int swapNumber=0; // number of swaps
 
  clock_t start = clock(); 
 

 /* loop to control number of passes */
  for (pass = 1 ; pass < SIZE; pass++){

  /* loop to control number of comparisons per pass */
    for (i = 0 ; i < SIZE-1; i++){
      comparisonNumber++; // increment the pass counter
    
      if (listPeakWindSpeedBubble[i] > listPeakWindSpeedBubble[i+1]) {
        swapNumber++; // increment the swap counter
        hold = listPeakWindSpeedBubble[i];
        listPeakWindSpeedBubble[i]   = listPeakWindSpeedBubble[i+1];
        listPeakWindSpeedBubble[i+1] = hold;
      } // end if
    } // end inner for
  } // end outer for
 
  printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < SIZE ; i++ ){
  //   printf("%f", listPeakWindSpeed[i]);
     fprintf(bubblesort,"%f\n",listPeakWindSpeedBubble[i]);
   }

   clock_t end = clock();  

   printf("Time taken bubblesort: %f\nNumber of Passes:%d, Number of Swaps:%d\n", (double) (start - end) / CLOCKS_PER_SEC,comparisonNumber,swapNumber);
}


void insertionsort(float listPeakWindSpeedInsertion[SIZE]){

  FILE *insertion=fopen("insertion.txt","wb");

 
  clock_t start = clock(); 


  int j;
  int comp=0; //number of comparisons
  int no_swap=0; // number of swaps
  float temp; // 
  int i,n;
  int c;
  
   // loop through all numbers 
  for (i = 1; i < SIZE; i++) {
     j = i;
     comp++;
     while ((j > 0) && (listPeakWindSpeedInsertion[j - 1] > listPeakWindSpeedInsertion[j])) {
           if(listPeakWindSpeedInsertion[j-1]>listPeakWindSpeedInsertion[j]){
           comp++;
        }
        temp = listPeakWindSpeedInsertion[j - 1];
        listPeakWindSpeedInsertion[j - 1] = listPeakWindSpeedInsertion[j];
        listPeakWindSpeedInsertion[j] = temp;
        j--;

        no_swap++;//increment swap variable when actually swap is done
    }
}
 
  for (c = 0; c <= SIZE - 1; c++) {
    fprintf(insertion,"%f\n",listPeakWindSpeedInsertion[c]);
  }
  fclose(insertion);

  clock_t end = clock();  

  printf("Time taken insertion: %f\nNumber of swaps:%d, Number of comparisons:%d\n", (double) (start - end) / CLOCKS_PER_SEC,comp,no_swap);
}
