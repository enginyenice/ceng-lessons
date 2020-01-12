#include <stdio.h>
#include <stdlib.h>
#define SABIT 10
#define SIFIR 0

/** Girilen sayidan geriye dogru sayar. */
int geriSay(int a)
{
    if(a < SIFIR)
        return 1;
    printf("%d ",a);
    return geriSay(a-1);
}
/** Girilen sayidan ileri dogru sayar */
int ileriSay(int a)
{
       if(a > SABIT)
        return SABIT;
       printf("%d ",a);
       return ileriSay(a+1);
}
/** Girlen eleman sayisina kadar olan fibonacci dizisi */
int fibonacci(int a,int x,int y)
{
    int z;
    /**
a => nereye kadar,
x => birinci sayi,
y => ikinci sayi,
z => toplamlari

     x   y    z
     0 + 1 => 1
     1 + 1 => 2
     2 + 1 => 3
     3 + 2 => 5
     5 + 3 => 8
     8 + 5 => 13
    */
    if(a < 1 )
        return 1;
    z = x + y;
    printf(" %d ",z);
    return fibonacci(a-1,z,x);
}
/** Girilen eleman sayisina kadar olan sayilarin carpimi */
int faktoriyel(int x)
{
    if(x < 1)
            return 1;
    return x * faktoriyel(x -1);

}
/** Girilen eleman sayina kadar olan sayilarin toplami */
int topla(int x)
{
    if(x < 1)
        return 0;
    return x + topla(x-1);
}


int main()
{
    printf("Reqursive Calismasi\n");

    printf("\n%d'den %d'ye Geri Sayma\n",SABIT,SIFIR);
    geriSay(SABIT);

    printf("\n\n%d'den %d'ye Ileri Sayma\n",SIFIR,SABIT);
    ileriSay(SIFIR);

    printf("\n\nFibonaccinin Ilk %d Elemani\n",SABIT);
    fibonacci(SABIT,0,1);

    printf("\n\n%d! Faktoriyelini Hesaplama\n",SABIT);
    printf("%d",faktoriyel(SABIT));

    printf("\n\n%d ye Kadar Olan Sayilarin Toplamini Hesaplama\n",SABIT);
    printf("%d",topla(SABIT));

    return 0;
}
