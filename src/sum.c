#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return n;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    /* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return sumtail(n-1,total+n);
  else
    return total+1;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  
  //Precondition
  assert(n>0);
  
  int total = 0; //MIG DER HAR LAVET DENNE. 
  
  //Løkke kører såfremt n har en værdi. n lægges til totalværdien for hver iteration af løkken.
  while (n>=1) {
    total+=n;
    n--;
  }

  return total;
}

