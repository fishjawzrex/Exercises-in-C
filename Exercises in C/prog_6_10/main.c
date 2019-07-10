// Program to generate a table of prime numbers

#include <stdio.h>

int main(void)
{

    int p, i;
    _Bool isPrime;

    for (p=2; p<=80; ++p){
        isPrime = 1;
        for (i=2; i<p; ++i)
            if ((p%i)==0)
                isPrime = 0;

        if (isPrime != 0)
            printf("%i ", p);
    }
    return 0;
}
