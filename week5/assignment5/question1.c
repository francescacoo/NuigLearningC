#include <stdio.h>
#include "listPeakWindSpeed.h"
#include <time.h>

void bubblesort();
void insertionsort();

int main(void){
bubblesort();
insertionsort();

  return 0;

}

void insertionsort(){

  FILE *insertion=fopen("insertion.txt","wb");

  int n, c, d;
float t;
 clock_t start = clock(); 
  for (c = 1 ; c <= SIZE - 1; c++) {
    d = c;
 
    while ( d > 0 && listPeakWindSpeed[d] < listPeakWindSpeed[d-1]) {
      t          = listPeakWindSpeed[d];
      listPeakWindSpeed[d]   = listPeakWindSpeed[d-1];
      listPeakWindSpeed[d-1] = t;
 
      d--;
    }
  }
 
 // printf("Sorted list in ascending order:\n");
 
 // for (c = 0; c <= SIZE - 1; c++) {
//    printf("%f\n", listPeakWindSpeed[c]);
  //}

  for (c = 0; c <= SIZE - 1; c++) {
fprintf(insertion,"%f\n",listPeakWindSpeed[c]);
}
fclose(insertion);

   clock_t end = clock();  

   printf("Time taken insertion: %f\n", (double) (start - end) / CLOCKS_PER_SEC);
}






  void bubblesort(){
      FILE *bubblesort=fopen("bubblesort.txt","wb");
  int pass; // passes counter
  int i; //comparison counter
  float hold; //temporary location used to swap array elements
 
clock_t start = clock(); 
 
 // for (i = 0; i < SIZE; i++){
 //   printf("%f",listPeakWindSpeed[i]);
 // }


//bubble sort
//loop to control number of passes
 
  for (pass = 1 ; pass < SIZE; pass++){
    for (i = 0 ; i < SIZE-1; i++)
    {
      if (listPeakWindSpeed[i] > listPeakWindSpeed[i+1]) /* For decreasing order use < */
      {
        hold = listPeakWindSpeed[i];
        listPeakWindSpeed[i]   = listPeakWindSpeed[i+1];
        listPeakWindSpeed[i+1] = hold;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < SIZE ; i++ ){
  //   printf("%f", listPeakWindSpeed[i]);
     fprintf(bubblesort,"%f\n",listPeakWindSpeed[i]);
   }

   clock_t end = clock();  

   printf("Time taken bubblesort: %f\n", (double) (start - end) / CLOCKS_PER_SEC);
   }