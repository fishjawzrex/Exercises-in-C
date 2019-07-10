#include <stdio.h>
// Basic conversions in C

int main(void){

    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1; //floating to integer conversion
    printf("%f assigned to an int produces %i\n", f1, i1);

    f1 = i2; //integer to floating point conversion
    printf("%i assigned to a float produces %f\n", i2, f1);

    //below, you can observe that an integer divided by
    //another integer results in a rounded-down integer
    //which is then converted to a float as seen in the
    //example below
    f1 = i2/100; //integer divided by integer
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2 = i2/100.0; //integer divided by float
    printf("%i divided by 100.0 produces %f\n", i2, f2);

    // below is an example/instance of type-casting
    f2 = (float) i2/100; //type cast operator
    printf("(float) %i divided by 100 produces %f\n", i2, f2);
    return 0;
}
