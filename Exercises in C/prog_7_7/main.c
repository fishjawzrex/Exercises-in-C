// This program takes in a number in base 10 and
//converts it to any desired base between 2 and 16

#include <stdio.h>

int main(void)
{
    //define constant character array
    const char baseDigits[16] = {'0', '1', '2', '3'
, '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    //define array where the remainder from modulus will be stored
    //in reverse order
    long long int rev_base[64]; // this is where you store
    //the reversed remainders
    int con_num, next_digit, base, index = 0; // declare number to be
    //converted:con_num, the base to be converted to, and
    //initialize the index counter to zero

    //prompt user for input
    printf("Please enter the number to be converted: \n");
    scanf("%i", &con_num);
    while(base < 2 || base > 16){
    //check to ensure user complies with base boundary
    //constraints
    //if (base < 2 || base > 16){
        printf("Enter a base between 2 and 16.\n");
        scanf("%i", &base);
        if (base < 2 || base > 16)
            printf("invalid base!\n");
                //return 1;//exits program if condition is violated
    }
    //perform calculations using integer division to eliminate
    //remainders and decrement con_num to zero
    while (con_num!=0){
        rev_base[index] = con_num % base;
        con_num /= base;
        ++index;
    }
    // since the index was incremented an additional
    //time without adding any new element into the
    //rev_base array, we must decrease the index function
    //a single time in order to neutralize this effect; this was
    //done in the initial condition of the subsequent for loop

    for (--index; index>=0; --index){
        next_digit = rev_base[index];
        printf("%c", baseDigits[next_digit]);
    }
    return 0;
}
