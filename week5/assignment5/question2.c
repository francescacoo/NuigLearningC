/*Using the sorted data you created in Question 1, identity the maximum and minimum wind speed values.  
Create an array consisting of five “bins” that divide the extremes of the data range into five equally spaced partitions.  
Create code that will read in the unsorted data, counting the frequency of instances of the data falling into each bin/partition. 
Print out the frequencies in an informative format.
*/

#include <stdio.h>
#include "listPeakWindSpeed.h" // include the array with the wind speed

void insertionsort(float listPeakWindSpeedInsertion[SIZE]); // function prototype for the insertion sort

int main(void){

	float minValue; // smaller value found
	float maxValue; // largest value found

	int bincounter[5]; // array which will hold the value for the 5 bins


// create the unsorted arrays to pass to the function
  float listPeakWindSpeedInsertion[ SIZE ];


  for(int i=0; i<SIZE; i++){
    listPeakWindSpeedInsertion[i]=listPeakWindSpeed[i];
  }

  // call the insertion sort function passing the unsorted array to find the min and max values
  insertionsort(listPeakWindSpeedInsertion);


printf("Minimum value:%f\nMax value:%f\n",listPeakWindSpeedInsertion[0],listPeakWindSpeedInsertion[SIZE-1]);

maxValue=listPeakWindSpeedInsertion[SIZE-1]; // the max value is the last in the array
// calculate the 5 bins - I calculate the boundaries at 20% - 40% - 60% - 80% and 100% of the maxValue 

float bin1limit=maxValue*0.2;
float bin2limit=maxValue*0.4;
float bin3limit=maxValue*0.6;
float bin4limit=maxValue*0.8;

for(int i=0;i<SIZE;i++){

	if(listPeakWindSpeed[i]>bin4limit){
		bincounter[5]++;
	}
	else if(listPeakWindSpeed[i]>bin3limit){
		bincounter[4]++;
	
	}
	else if(listPeakWindSpeed[i]>bin2limit){
		bincounter[3]++;
		}
	else if(listPeakWindSpeed[i]>bin1limit){
		bincounter[2]++;
	}

	else{
		bincounter[1]++;
	}//close the for cycle
}

// cycle the 5 bin
for(int x=1;x<6;x++){
	//print the number of the bin and the n of occurrences
	printf("\nBin n. %d: %03d ", x, bincounter[x]);

	// cycle through the counters, every 10 print a * to create the histogram
	for(int a=0;a<bincounter[x];a++){

		if(a%10==0){
		printf("*");
		}
	}
}
printf("\n");
  return 0;

}

// insertion sort function 
void insertionsort(float listPeakWindSpeedInsertion[SIZE]){

  int j;
  int comp=0; //number of comparisons
  int no_swap=0; // number of swaps
  float temp; // to keep the temporary value 
  int i,n;
  int c;
  
   // loop through all numbers 
  for (i = 1; i < SIZE; i++) {
     j = i;
     comp++;
     while ((j > 0) && (listPeakWindSpeedInsertion[j - 1] > listPeakWindSpeedInsertion[j])) {
           if(listPeakWindSpeedInsertion[j-1]>listPeakWindSpeedInsertion[j]){
           comp++; // increse the comparison counter
        }
        temp = listPeakWindSpeedInsertion[j - 1];
        listPeakWindSpeedInsertion[j - 1] = listPeakWindSpeedInsertion[j];
        listPeakWindSpeedInsertion[j] = temp;
        j--;

        no_swap++;//increment swap variable when actually swap is done
    }
}
 
 
}