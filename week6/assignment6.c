#include"stdio.h"
#include"stdlib.h"

int main() {

  FILE *fp1;

  fp1 = fopen("test.txt","r");
  int c;

 int line_count = 1;

    while ( (c=fgetc(fp1)) != EOF ) {
        if ( c == '\n' )
            line_count++;
    }


    printf("%d\n",line_count );
return 0;
        }

