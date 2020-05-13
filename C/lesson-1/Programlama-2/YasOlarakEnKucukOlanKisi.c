/*
Ad Soyad: Engin Yenice
Numara  :190201133
*/
#include <stdio.h>
#include <stdlib.h>


struct kisiBilgileri
{
    char ad[20]; // kisinin adi
    int gun;     // kisinin dogdugu gun
    int ay;      // kisinin dogdugu ay
    int yil;     // kisinin dogdugu yil
};
int kisiSayisi = 0; // Kisi sayisi
int kucuguBul(struct kisiBilgileri Kisi[])
{
    int toplamTarih = 0,indis = -1; //toplamTarih bulunan en buyuk tarihi alacak | indis onun sirasini dondurur
    for(int i = 0; i<kisiSayisi; i++)
    {
        if((Kisi[i].gun + Kisi[i].ay * 30 +Kisi[i].yil * 365) > toplamTarih) // en buyuk tarihi gun bazinda bulur
        {
            toplamTarih = (Kisi[i].gun + Kisi[i].ay * 30 +Kisi[i].yil * 365);
            indis = i;
        }
    }
    return indis; // en kucuk olanin indisini dondurur.
}
int main()
{
    /**
    Girilen kisilerden en kucuk olani ekrana yazdiran program.
    */
    printf("Kisi sayisini giriniz: ");
    scanf("%d",&kisiSayisi);

    struct kisiBilgileri kisiler[kisiSayisi -1]; // Yazilan kisi sayisi boyutunda dizi

    for(int i = 0; i<kisiSayisi; i++)
    {
        printf("%d. kisinin ismini giriniz: ",i+1);
        scanf("%s",kisiler[i].ad);
        printf("%d. kisinin dogum tarihini giriniz: \n",i+1);
        printf("GUN: ");
        scanf("%d",&kisiler[i].gun);
        printf("AY: ");
        scanf("%d",&kisiler[i].ay);
        printf("YIL: ");
        scanf("%d",&kisiler[i].yil);
    }

    printf("Kisi Bilgileri\n");
    printf("-----------------------\n");
    for(int i =0; i<kisiSayisi; i++)
        printf("%s - %d / %d / %d\n",kisiler[i].ad,kisiler[i].gun,kisiler[i].ay,kisiler[i].yil);
    printf("-----------------------\n\n");


    int kucukBilgisi = kucuguBul(kisiler); // En kucuk kisinin indisini alir.
    printf("En kucuk kisinin ismi: %s\n",kisiler[kucukBilgisi].ad);
    printf("En kucuk kisinin dogum tarihi: %d - %d - %d\n",kisiler[kucukBilgisi].gun,kisiler[kucukBilgisi].ay,kisiler[kucukBilgisi].yil);

    return 0;
}
