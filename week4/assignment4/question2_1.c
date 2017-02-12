#include <stdio.h>
#include <time.h>
 
// function prototypes 
unsigned long long int recursiveFactorial(int); 
unsigned long long int loopFactorial(int);

int main()
{

  unsigned long long int f,l;
  long double e, e2;

  e=0.0;
  e2=0.0;
  
  clock_t tic = clock();

  for(int i=0; i<20; i++){
    f = recursiveFactorial(i);
    printf("%d! = %llu\n", i, f);
    e += 1.0/f;
    printf("current e: %Lf\n", e);
  }
    

  clock_t toc = clock();

  printf("Elapsed: %f seconds\n\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    
   clock_t tic1 = clock();

  for(int x=0; x<20; x++){
    l = recursiveFactorial(x);
    printf("%d! = %llu\n", x, l);
    e2 += 1.0/l;
    printf("current e: %Lf\n", e2);
  }
    

  clock_t toc1 = clock();

  printf("Elapsed: %f seconds\n\n", (double)(toc1 - tic1) / CLOCKS_PER_SEC);
 
  return 0;
}
 
unsigned long long int recursiveFactorial(int n){
  if (n == 0)
    return 1;
  else
    return(n * recursiveFactorial(n-1));
}

unsigned long long int loopFactorial(int n){
  int c;
  long fact = 1;
  for (c = 1; c <= n; c++)
    fact = fact * c;

  return fact;
}