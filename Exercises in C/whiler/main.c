/*This program takes in two integer values and then calculates and prints
out their greatest common divisor/factor - THE GCD*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u,v,temp;//the three variables u,v, and temp are declared
    printf("ENTER TWO DIGITS BELOW TO FIND THEIR GCD:\n");//print statement to prompt user
    scanf("%i%i", &u,&v);//the scanf function to collect the two integers to be manipulated
    while(v!=0){   //here is the actual algorithm that does all the heavy-lifting

        temp = u%v;
        printf("%5i %5i %5i\n", u, v, temp);
        u = v;
        v = temp;
    }
    printf("THE GCD OF THE NUMBERS YOU ENTERED IS %i\n", u); //display result
    return 0;
}
