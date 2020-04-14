#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void parayiBoz(int para)
{
    int paraBirimleri[7] = {200,100,50,20,10,5,1};

    for(int i = 0 ; i<7;i++)
    {
        if(para >= paraBirimleri[i])
        {
        printf("%d'luk : %d\n",paraBirimleri[i],para / paraBirimleri[i]);
        para = para - ceil((para / paraBirimleri[i])*paraBirimleri[i]);
        }
    }
}
int main()
{
    printf("Bozulacak para miktarini giriniz: ");
    int para;
    scanf("%d", &para);
    parayiBoz(para);

    return 0;
}
