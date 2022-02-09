#include <stdio.h>

union AnElt{
    int i;
    char c;
} elt1, elt2;

int main(void){

    union AnElt elt;
    elt.i = 4;
    elt.c = 'A';

    return 0;
}

