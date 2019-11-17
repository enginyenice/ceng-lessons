#include <stdio.h>

/*
Create the output below. (FOR)
x
x x
x x x
x x x x
x x x x x
*/
int main()
{

    for(int a = 1; a < 6; a++)
    {
        for(int b = 1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
