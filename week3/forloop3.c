#include <stdio.h>

// program that sums the even numbers to 100
int main(void) {
	int i, tot=0;
	for(i=2; i<100; i+=2){
		tot += i;
		printf("%d\n",tot);
	}

}