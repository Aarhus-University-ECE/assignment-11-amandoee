#include "sumn.h"

#include<stdio.h>
#include <assert.h>

int sumn (int n)
{
    //Precondition
    assert(n>0);
    
    if (n == 1) {
        return (2*1-1);
    } else if (n>1) {
        return (2*n-1)+(sumn(n-1));
    }

}