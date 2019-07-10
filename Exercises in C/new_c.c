#include <stdio.h>
int main(void){
    int n, tri_num = 0;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n\n");
    printf(" n       Sum from 1 to n\n");
    printf("---      ---------------\n");
    for (n=1; n<=99; n++){
        tri_num = tri_num + n;
        printf("%3i         %i\n", n, tri_num);
    }
    return 0;
}
