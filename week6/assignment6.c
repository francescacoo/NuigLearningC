#include"stdio.h"
#include"stdlib.h"
#include"string.h"

// function prototypes
int readword(const char *filename, char* arr[]);
int writeword(const char *filename, char* arr[], int N);
void bubblesort(char* arr[], int N);


int main() {

	int c, N;
	char inputfilename[260]; // input filename
	char outputfilename[260]; //output filname
	printf("Input file name :  "); // prompt to insert the input file name
	scanf("%s",inputfilename);

	int line_count; // to hold the number of lines in the file
	FILE * fp1; 			// Input file 

	  if((fp1 = fopen(inputfilename, "r")) == NULL){

        fprintf(stderr,"Error opening the file");
        return(-1);
    }
    else{
// Open file for reading 
	 fp1 = fopen(inputfilename,"r");

// count the number of lines in the file
	    while ( (c=fgetc(fp1)) != EOF ) {
        if ( c == '\n' ) // cycle the carachters until it reaches a \n
            line_count++; // if it is a \n increase the line_count
    	}
    }
	char* wordarray[line_count]; // define the array with the correct size

	N = readword(inputfilename,wordarray);

	printf("Please insert the output filename : ");
	scanf("%s",outputfilename);

	bubblesort(wordarray, N);

	if((fp1 = fopen(outputfilename, "w")) == NULL){
        fprintf(stderr,"Error opening the file for writing");
        return(-1);
	}
	else{
// Output sorted data 
		writeword(outputfilename,wordarray,N);
	}

  
	return 0;
}



int readword(const char *file, char* wordarray[]){
	char tempword[512]; 		// Suppose that line can't be longer than 511 symbols 
	int i = 0, lenght;

	FILE * fp2; 			// Input file 
// Open file for reading 
	fp2 = fopen(file,"r");


	if (!fp2){// Check if file opening is succesful
		// 
		return -1;
	}
// Read data 
	while (!feof(fp2)){
		// Read the word in the temporary var 
		fscanf(fp2,"%s",tempword);
		// check the lenght of the word
		lenght = strlen(tempword);
		// Allocate memory for the word... 
		wordarray[i] = (char*)malloc(lenght+1);
		// copy the word to the array 
		strcpy(wordarray[i],tempword);
		// Increase counter 
		++i;
	}
// Close the file 
	fclose(fp2);
// Return number of elements in the wordarray
	return i;

}


int writeword(const char *filename, char* wordarray[], int N){
	int i;
	FILE * outputfilename; // Output file 
// Open file
	outputfilename = fopen(filename,"w");
// Check if the file opening was succesful
	if (!outputfilename){

		return -1;
	}
// loop to write data to the output file
	for (i=0; i<N-1; ++i){

	fprintf(outputfilename,"%s\n",wordarray[i]); //print \n to print one word per line
	}
	// print the last word
	fprintf(outputfilename,"%s",wordarray[N-1]);
// Close the output file 
	fclose(outputfilename);
// Return success code 
	return 0;
}

  void bubblesort(char* wordarray[], int N){


    int pass; // passes counter
    int i; //comparison counter
    int comparison;
    char *hold; //temporary location used to swap array elements

 

 /* loop to control number of passes */
    for (pass = 1 ; pass < N; pass++){

  /* loop to control number of comparisons per pass */
      for (i = 0 ; i < N-1; i++){

    	comparison=strcmp(wordarray[i],wordarray[i+1]);
        if (comparison>0) {

          hold = wordarray[i];
          wordarray[i]   = wordarray[i+1];
          wordarray[i+1] = hold;
        } // end if
      } // end inner for
    } // end outer for
 
 

   }


