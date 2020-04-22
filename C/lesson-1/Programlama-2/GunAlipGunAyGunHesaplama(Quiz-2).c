/*
Adi Soyadi: Engin Yenice
Numara: 190201133
*/
#include <stdio.h>
#include <stdlib.h>
#define gercekYil 365
#define gercekAy 30

/*
Gercek yil ve gercek ay tarihleri define olarak eklendi
FIXME:  SORUNUN EKRAN CIKTISINDA YIL 365 GUN ALINMISTIR. (Tüm aylarýn 30 gün sürdüðü kabul edilecektir.)
*/

void hesapla(int toplam,int *yil,int *ay,int *gun)
{
    *yil = toplam / gercekYil; // Yil verisi belirlendi
    toplam = toplam - (toplam/gercekYil) * gercekYil; // Toplam tarihten yil verisi cikarildi
    *ay = toplam / gercekAy; // Ay verisi belirlendi
    toplam = toplam - (toplam/gercekAy) * gercekAy; // Toplam tarihten ay verisi cikarildi
    *gun = toplam; // Kalan gun verisi atandi
}
int main()
{
    int yil,ay,gun,toplam;
    printf("Isin bitme suresine kac gun oldugunu giriniz: ");
    scanf("%d",&toplam);
    hesapla(toplam,&yil,&ay,&gun);
    printf("%d yil %d ay  %d gun suren var",yil,ay,gun);
    return 0;
}
