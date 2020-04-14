#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int sayi = rand()%100000;
    printf("%d\t |",sayi);
    int dizi[7];
    int durum=0;
    for(int i=0; i<7; i++)
        dizi[i] = -1;
    int k=0;
    while(sayi !=0)
    {
        dizi[k] = sayi %10;
        k++;
        sayi = sayi/10;
    }
    for(int m=0; m<7; m++)
    {
        for(int x=m+1; x<7; x++)
        {
            if(dizi[m] == dizi[x] && dizi[m] != -1)
                durum = 1;
        }
    }
    if(durum==1)
        printf("Tekrar eden var");
    else
        printf("Tekrar eden yok");
    return 0;
}
