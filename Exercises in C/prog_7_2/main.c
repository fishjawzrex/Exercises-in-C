#include <stdio.h>

int main(void)
{
    int ratingsCounter[11], i, response;
    for(i=1; i<=10; ++i)
        ratingsCounter[i] = 0;

    printf("Enter Response: \n");
    for (i=1; i<=20; ++i)
    {
        scanf("%i", &response);
        if (response < 1 || response > 10){
            printf("Invalid Response!");
            printf("Enter a rating between 1 and 10.\n");
        }
        else
            ++ratingsCounter[response];
    }
    for (i=1; i<=10; ++i)
    printf("ratingsCounter[%i] = %i\n", i, ratingsCounter[i]);
    return 0;
}
