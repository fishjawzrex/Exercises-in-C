/* This is a short program that is designed
to converted an inputed floating point value
from Fahrenheit to Centigrade/Celsius*/

//include the standard libraries
#include <stdio.h>
#include <stdlib.h>

//set up the main function and parameters
int main(void)
{
    //declare all variables that will be
    //employed in calculation below
    float celsius, fahrenheit;
    //use print statement to prompt user for input
    printf("ENTER A VALUE IN FAHRENHEIT TO BE\
CONVERTED TO CELSIUS:\n\n");
    //read/scan the input into a location in memory
    //using scanf; location==fahrenheit
    scanf("%f", &fahrenheit);
    //perform calculation and assign the output
    //to celsius variable
    celsius = (fahrenheit - 32)/1.8;
    printf("\n\n");
    //display formatted result on the terminal
    printf("%.0f DEGREES FAHRENHEIT IS %.2f DEGREES CELSIUS.", fahrenheit, celsius);
    //return flag to indicate termination of script
    return 0;
}
