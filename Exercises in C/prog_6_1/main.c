//program 6.1: to calculate the
//absolute value of an integer

#include <stdio.h>

int main(void)
{
    int number;

    printf("Type in your number: \n\n");
    scanf("%i", &number);
    printf("\n");
    if (number<0)
        number = -number;

    printf("The absolute value is %i.", number);

    return 0;
}
