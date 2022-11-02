/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */

//Bruger funktionsvariable både som predefinerede tal for f1 og f2, MEN benytter det også som en slags 'sum' og 'pre_sum', forstået sådan hvis man havde anvendt en løkke. 
int fib (int n, int p, int pp)
{
    /* pre-condition */
assert (n >= 1);
/* post-condition */

    if(n == 1)
        return p;
    else if(n == 2)
        return pp;
    else
        return fib(n-1,pp,p+pp);
}

//Funktion til testcases
int factorial_addition(int n) {

    int sum = 0;

    for (int i=0; i<n; n--) {
        sum+=n;
    }

    return sum;
}


