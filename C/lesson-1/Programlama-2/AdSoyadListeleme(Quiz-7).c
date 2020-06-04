/**
Ad Soyad: Engin Yenice
Numara  : 190201133

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kisi
{
    char adSoyad[50];
    int yas;
};
int kacKisi;
void Alfabetik(struct kisi kisiListesi[])
{
    char geciciAdSoyad[50];
    int geciciYas;


    for (int i = 1; i < kacKisi; i++)
    {
        for (int j = 1; j < kacKisi; j++)
        {
            if (strcmp(kisiListesi[j - 1].adSoyad, kisiListesi[j].adSoyad) > 0)
            {

                strcpy(geciciAdSoyad, kisiListesi[j - 1].adSoyad);
                geciciYas = kisiListesi[j - 1].yas;

                strcpy(kisiListesi[j - 1].adSoyad, kisiListesi[j].adSoyad);
                kisiListesi[j-1].yas = kisiListesi[j].yas;

                strcpy(kisiListesi[j].adSoyad, geciciAdSoyad);
                kisiListesi[j].yas = geciciYas;

            }
        }
    }
    printf("\nAda gore fihrist siralamasi:\n");
    Listele(kisiListesi);
}

void SayisalSiralama(struct kisi kisiListesi[])
{


    char geciciAdSoyad[50];
    int geciciYas;


    for (int i = 1; i < kacKisi; i++)
    {
        for (int j = 1; j < kacKisi; j++)
        {
            if (kisiListesi[j - 1].yas <  kisiListesi[j].yas)
            {

                strcpy(geciciAdSoyad, kisiListesi[j - 1].adSoyad);
                geciciYas = kisiListesi[j - 1].yas;

                strcpy(kisiListesi[j - 1].adSoyad, kisiListesi[j].adSoyad);
                kisiListesi[j-1].yas = kisiListesi[j].yas;

                strcpy(kisiListesi[j].adSoyad, geciciAdSoyad);
                kisiListesi[j].yas = geciciYas;

            }
        }
    }
    printf("\nYasa gore buyukten kucuge siralama:\n");
    Listele(kisiListesi);
}


void Listele(struct kisi kisiListesi[]){
    for(int k = 0 ; k<kacKisi; k++)
    {
        printf("%s %2d\n",kisiListesi[k].adSoyad,kisiListesi[k].yas);

    }
}

int main()
{
    printf("Kisi sayisi giriniz: ");
    scanf("%d", &kacKisi);

    struct kisi kisiListesi[kacKisi];
    for(int i = 0; i < kacKisi; i++)
    {
        char adSoyad[20];
        int yas;
        printf("%d. Kisiyi giriniz: ",i+1);
        scanf("%s",adSoyad);

        printf("%d. Kisinin yasini giriniz: ", i+1);
        scanf("%d",&yas);

        strcpy(kisiListesi[i].adSoyad,adSoyad);
        kisiListesi[i].yas = yas;
    }

    Alfabetik(kisiListesi);
    SayisalSiralama(kisiListesi);

    return 0;
}
