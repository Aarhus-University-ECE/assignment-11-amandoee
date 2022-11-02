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
    return 1;
}

/* Sum integers 1 to n */
//Tror det er rigtigt. Tjek efter.
int sumtail (int n, int total)
{
    /* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return sum (n - 1) + n;
  else
    return 1;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  return 0;
}

