#include <stdio.h>
#include <stdlib.h>


void ortalamaHesapla(int adet,float sicakliklar[])
{
    float topla = 0;
    for(int i=0;i<adet;i++)
        topla += sicakliklar[i];
    float ortalama = topla / adet;
    printf("Ortalama Sicaklik: %f\n",ortalama);
    for(int i=0;i<adet;i++)
    {
        if(ortalama < sicakliklar[i])
            printf("Ortalamanin uzerinde sicaklik: %f", sicakliklar[i]);
        else if(ortalama > sicakliklar[i])
            printf("Ortalamanin altindaki sicaklik: %f", sicakliklar[i]);
        else
            printf("Ortalamaya esit sicaklik: %f", sicakliklar[i]);
        printf("\n");
    }
}

int main()
{
    int adet;
    printf("Kac adet sicaklik gireceksiniz ?");
    scanf("%d",&adet);
    float sicakliklar[adet];
    int i = 0;
    while(i < 3)
    {
        float temp;
        printf("%d. Sicakligi giriniz: ",i+1);
        scanf("%f", &temp);
        sicakliklar[i] = temp;
        i++;
    }
    ortalamaHesapla(adet,sicakliklar);
    return 0;
}
