#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[4];
    int i = 0;
    while(i < 4)
    {
        printf("%d. Sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        i++;
    }

    int enBuyuk,enKucuk;
    for(int i = 0; i< 4;i++)
    {
        if(i == 0)
            { enBuyuk = dizi[i];
              enKucuk = dizi[i];
            }
        if(dizi[i] > enBuyuk)
            enBuyuk = dizi[i];
        if(dizi[i] < enKucuk)
            enKucuk = dizi[i];
    }
    printf("En Buyuk : %d\n", enBuyuk);
    printf("En Kucuk : %d", enKucuk);

    return 0;
}
