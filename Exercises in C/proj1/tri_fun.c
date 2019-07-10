/*This is a program that I am writing with the intention of exploring
how loops work in the C programming language*/
#include <stdio.h>
int tri_fun(void){
    int tri_num , n, i, number;
    for(i=1; i<=5; i++){
        tri_num = 0;

        printf("ENTER A NUMBER:");
        scanf("%i", &number);
            for(n=1;n=number; n++){
                tri_num = tri_num + n;
            printf("THE TRIANGULAR NUMBER OF %i is %i", number, tri_num);
            }
    }
    return 0;
}
