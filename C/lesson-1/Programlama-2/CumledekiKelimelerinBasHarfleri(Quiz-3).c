/*
Adi Soyadi: Engin Yenice
Numara : 190201133
*/

#include <stdio.h>
#include <stdlib.h>
int cumleUzunlugu = 1000000;             // heryerde deger girmemek icin sabit olarak eklendi.

void basHarfiBul(char *text)            //Bas harfi bul
{

    if(text[0] != ' ')                  // Ilk karakter bosluk mu kontrol ediyor
        printf("%c \n", text[0]);

    int i = 0;
    for(i; i<cumleUzunlugu;i++)                  // Bosluk olan karakteri tespit eder. 1 Sonrasý karakter mi diye bakar.
        if((text[i] == ' ' && text[i+1] != ' '))
            printf("%c \n", text[i+1]);
}

int main()
{
    char text[cumleUzunlugu];
    /*
     Hafýzadaki 1000'lik alanda doluluk olup olmadýgýný kontrol etmek icin text arrayinin
     tum elemanlarina \0 degerini ekliyor. Bu sayede cumlenin devaminda olusan
     rastgele kelime uretme ihtimalini engelliyoruz.
     Harici bir kutuphane kullanmamak icin bu kontrolu yaptim.
    */
  /*
    for(int i =0;i<cumleUzunlugu;i++){
        text[i] = '\0';
    }
    */
    printf("Cumleyi giriniz: ");
    gets(text);
    basHarfiBul(text);
    return 0;
}
