#include <stdio.h>
#include <stdlib.h>

int main()
{
    int adet = 20; // Ilk kac elemani gelsin
    int fibonacci[adet];// Dizi tanimlandi
    fibonacci[0] = 0; // 0. eleman =  0
    fibonacci[1] = 1; // 1. eleman = 1

    for(int i = 2; i< adet;i++)
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    for(int i = 0; i< adet;i++)
         printf(" %d ",fibonacci[i]);
    return 0;
}
