#include <stdio.h>
#include <time.h>
 
int main()
{
  int c, n;
  long fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
clock_t tic = clock();

  for (c = 1; c <= n; c++)
    fact = fact * c;
clock_t toc = clock();
  printf("Factorial of %d = %ld\n", n, fact);


    printf("Elapsed: %f seconds\n\n", (double)(toc - tic) / CLOCKS_PER_SEC);
 

 
  return 0;
}