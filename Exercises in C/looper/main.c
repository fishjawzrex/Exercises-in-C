/*I have written this program in order to study and properly understand
how loops and functions work*/
#include <stdio.h>
int main(void){
    int tri_num , n, i, number;
    for(i=1; i<=5; i++){
        tri_num = 0;  //I am resetting the value of the triangular number to 0

        printf("ENTER A NUMBER:");
        scanf("%i", &number);
            for(n=1;n<=number; n++){
                tri_num = tri_num + n;
            }
        printf("THE TRIANGULAR NUMBER OF %i is %i\n", number, tri_num);

    }
    return 0;
}
