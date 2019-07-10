//this program is intended to produce factorial numbers
#include <stdio.h>

int main(void){
   int j;
   unsigned long long int factorial();
    for(j=0; j<35; j++)
        printf("%2i!=%llx\n", j,factorial(j));
    return 0;
}

unsigned long long int factorial(int n){
    int result;
    if (n==0)
        result = 1;
    else
        result = n * factorial(n-1);
    return result;
}
