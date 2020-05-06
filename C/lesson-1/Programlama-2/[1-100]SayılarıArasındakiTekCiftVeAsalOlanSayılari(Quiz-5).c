#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
Tek sayýlar için; | sayýnýn yarýsý alýnýr |>>|sayýnýn yarýsý alýnýr|
Çift sayýlar için; | sayýnýn iki katý alýnýr |>>|sayýnýn iki katý alýnýr|
Asal sayýlar için; | sayýnýn karesi alýnýr |>>|sayýnýn karesi alýnýr|
*/

char stringDizi[1000];
int sayiTipi(int sayi){
    int asalKontrol = 0; // asal degil
 if(sayi > 1)
 {
        for(int i = 2; i<sayi && sayi > 2;i++)
        if(sayi % i == 0)
            asalKontrol = 1;
 if(asalKontrol == 0)
        return 1; // sayi asaldir
 }

    if(sayi % 2 == 0)
        return 2; // sayi cift
    else
        return 3; // sayi tek
}
void diziyeAktar(int sayi,int donenSonuc){ // Olusan sonuclar string bir diziye aktarilir.
    float hesaplama;
switch(donenSonuc){
case 1:
    hesaplama = 0;
    hesaplama = sayi * sayi;
    sprintf(stringDizi, "|%3.d(Asal )| ...^^... |%5.0f| ..>>.. |%9.4f|\n",sayi,floor(hesaplama),hesaplama);
    break;
case 2:
    hesaplama = 0;
    hesaplama = sayi * 2.0;
    sprintf(stringDizi, "|%3.d(Cift )| ...><... |%5.0f| ..>>.. |%9.3f|\n",sayi,floor(hesaplama),hesaplama);
    break;
case 3:
    hesaplama = 0;
    hesaplama = sayi / 2.0;
    sprintf(stringDizi, "|%3.d(Tek ) | ...//... |%5.0f| ..>>.. |%9.2f|\n",sayi,floor(hesaplama),hesaplama);
    break;

}

}
int main(){
    /**
    0-100 Arasindaki sayilarin asal - cift veya tek oldugunu bulup tablo olarak
    ekrana cikti veren program
    */
    system("color F0"); // Ekran rengini beyaz yazý rengini siyah yapar.
    for(int i = 1; i<=100;i++)
    {
        int donenSonuc = sayiTipi(i); //Sayinin tek cift veya asal oldugunu belirler.
        diziyeAktar(i,donenSonuc); //Sonucu diziye aktarma islemini yapar.
        printf("%s",stringDizi); //Sonucu ekrana yazar.
    }
    return 0;
}
