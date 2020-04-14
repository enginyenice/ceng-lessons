#include <stdio.h>
#include <stdlib.h>


int RakamBul(int x,int y)
{
    int adet = 0;
    while(x>0)
    {
        if(x%10 == y)
            adet = adet + 1;
        x = x/10;

    }

    return adet;
}
int main()
{
    int a,b;
    printf("bir sayi ve bir rakam giriniz ");
    scanf("%d %d", &a,&b);
    printf("%d rakamindan %d sayinda %d adet vardir.",b,a,RakamBul(a,b));
    return 0;
}
