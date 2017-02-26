#include"stdio.h"
#include"stdlib.h"
#include"string.h"
// function prototypes
int readword(const char *filename, char* arr[]);
int writeword(const char *filename, char* arr[], int N);
void bubblesort(char* arr[], int N);

int main() {
int c, num;
	char inputfilename[200]; // input filename
	char outputfilename[200]; //output filname
	printf("Insert the name of the Input file:  "); // prompt to insert the input file name
	scanf("%s",inputfilename);
	int line_count; // to hold the number of lines in the file
	FILE * fp1; // Input file 
//if the file doesn’t exist:
	if((fp1 = fopen(inputfilename, "r")) == NULL){
        	fprintf(stderr,"Error opening the file");
        	return(-1);
    	}
   	else{
// Open file for reading 
	 	fp1 = fopen(inputfilename,"r");
// count the number of lines in the file
	   	while ( (c=fgetc(fp1)) != EOF ) {
        		if ( c == '\n' ) // loop the characters until it reaches a \n
            		line_count++; // if it is a \n increase the line_count
    		}
    	}
	char* wordarray[line_count]; // define the array with the correct size
	num = readword(inputfilename,wordarray); // call the function to read the words which returns the number of elements in the array

	printf("Please insert the name of the output file: ");// prompt to insert the output file name
	scanf("%s",outputfilename);

	bubblesort(wordarray, num); // // call the bubblesort function to sort the data
//	try to open the output file for writing
	if((fp1 = fopen(outputfilename, "w")) == NULL){
       		fprintf(stderr,"Error opening the file for writing");
        	return(-1);
	}
	else{
// call the function to write the sorted data 
		writeword(outputfilename,wordarray,num);
	}
  
	return 0;
}


int readword(const char *file, char* wordarray[]){
	char tempword[500]; //to hold the temporary word, assuming it cannot be longer than 500 chars 
	int i = 0, lenght;
	FILE * fp2; 		// Input file 
// Open file for reading 
	fp2 = fopen(file,"r");
	if (!fp2){// Check if file opening is successful
		return -1;
	}
// loop until it reaches the end of file 
	while (!feof(fp2)){
		// Read the word in the temporary variable
		fscanf(fp2,"%s",tempword);
		// check the length of the word
		lenght = strlen(tempword);
		// allocate right size memory for the word... 
		wordarray[i] = (char*)malloc(lenght+1);
		// copy the word to the array 
		strcpy(wordarray[i],tempword);
		// Increase counter 
		++i;
	}
// Close the file 
	fclose(fp2);
// Return number of elements inserted in the wordarray
	return i;
}

int writeword(const char *filename, char* wordarray[], int num){
	int i;
	FILE * outputfilename; // Output file 
// Open file
	outputfilename = fopen(filename,"w");
// Check if the file opening was successful
	if (!outputfilename){
		return -1;
	}
// loop to write data to the output file
	for (i=0; i<num-1; ++i){
	fprintf(outputfilename,"%s\n",wordarray[i]); //print \n to print one word per line
	}
	// print the last word
	fprintf(outputfilename,"%s",wordarray[num-1]);
// Close the output file 
	fclose(outputfilename);
// Return success code 
	return 0;
}
void bubblesort(char* wordarray[], int num){
    int pass; // passes counter
    int i; //comparison counter
    int comparison;
    char *hold; //temporary location used to swap array elements
 /* loop to control number of passes */
    for (pass = 1 ; pass < num; pass++){
  /* loop to control number of comparisons per pass */
      for (i = 0 ; i < num-1; i++){
    	comparison=strcmp(wordarray[i],wordarray[i+1]);
        if (comparison>0) {
          hold = wordarray[i];
          wordarray[i]   = wordarray[i+1];
          wordarray[i+1] = hold;
        } // end if
      } // end inner for
    } // end outer for
}
