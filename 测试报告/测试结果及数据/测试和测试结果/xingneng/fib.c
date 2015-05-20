#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int fib(int n)
{
  if (n < 2) 
    return 1;
  else
    return fib(n-1) + fib(n-2);
}

int main(int argc, char ** argv)
{
  clock_t  start,finish;
  double dur=0.0;
  int n, r;
  if (argc >= 2) n = atoi(argv[1]); else n = 36;
  start=clock();
  r = fib(n);
  finish=clock();
  dur=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("fib(%d) = %d\n", n, r);
  printf("time=%lf\n",dur);
  return 0;
}
