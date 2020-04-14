#include <stdio.h>
#include <stdlib.h>



int Obeb(int x, int y)
{
    int kucuk;
    if(x < y)
        kucuk = x;
    else
        kucuk = y;

    for(int i = kucuk; i > 0; i--)
    {
        if((x % i == 0) && (y % i  == 0))
            return i;

    }
    return 1;

}
int Okek(int x,int y)
{
    return (x*y)/Obeb(x,y);

}



int main()
{
    int a,b;
    printf("Iki sayi girin: ");
    scanf("%d %d",&a,&b);
    printf("OBEB(%d,%d) = %d\n", a,b,Obeb(a,b));
    printf("OKEK(%d,%d) = %d", a,b,Okek(a,b));
    return 0;
}
