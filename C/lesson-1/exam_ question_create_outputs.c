#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    *BBBB*
    B*BB*B
    BB* *BB
    */
    int s = 5;
    for(int satir = 0; satir<s ; satir++)
    {
        for(int a = 0;a<satir;a++)
        {
            printf("B");
        }
        printf("*");
        for(int b = 1; b<2*(s-satir)-1;b++)
        {
            printf("B");

        }
        printf("*");
        for(int b = 0; b<satir;b++)
        {
            printf("B");

        }

        printf("\n");
    }
    return 0;
}
