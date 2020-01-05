#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10] = {0,1,2,3,4,5,6,7,8,9};
    int boyut,orta;
    boyut = 10;
    orta = boyut / 2;

    printf("Duz dizi : ");
    for(int i = 0; i<boyut;i++)
        printf(" %d ",dizi[i]);
    for(int i = 0; i<orta;i++)
    {
        int temp;
        temp = dizi[i];
        dizi[i] = dizi[boyut-1-i];
        dizi[boyut-1-i] = temp;
    }

    printf("\nTers dizi : ");
    for(int i = 0; i<boyut;i++)
        printf(" %d ",dizi[i]);


    return 0;
}
