#include <stdio.h>

/*
Create the output below. (FOR)
....x           4 dot 1 x
...xxz          3 dot 2 x 1 z
..xxxzz         2 dot 3 x 2 z
.xxxxzzz        1 dot 4 x 3 z
Xxxxxzzzz       0 dot 5 x 4 z
*/
int main()
{
    for(int a = 1; a < 6; a++)
    {
        for(int dot=5; 0<dot-a; dot--)
        {
            printf(".");
        }
        for(int x=0; x<a; x++)
        {
            printf("x");
        }
        for(int z=0; z<a-1; z++)
        {
            printf("z");
        }
        printf("\n");
    }
    return 0;
}
