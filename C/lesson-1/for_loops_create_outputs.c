#include <stdio.h>

/*
Create the output below. (FOR)
1 2 3 4 5 6
2 4 6 8 10 12
3 6 9 12 15 18
4 8 12 16 20 24
5 10 15 20 25 30
6 12 18 24 30 36
*/
int main()
{

    for(int a = 1; a <= 6; a++)
    {
        for(int b = 1; b<=6; b++)
        {
            printf("%d ",a*b);
        }
        printf("\n");
    }
    return 0;
}
