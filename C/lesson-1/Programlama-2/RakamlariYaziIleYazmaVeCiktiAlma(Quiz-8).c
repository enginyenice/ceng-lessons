/**
Adi Soyadi: Engin Yenice
Numara    : 190201133
*/
#include <stdio.h>
#include <stdlib.h>
void ekranaYaz(char sayilar[],int uzunluk)
{
    char text[uzunluk*7];

    for(int i = 0; i<strlen(text);i++)
        text[i] = '\0';


    for(int i = 0; i<uzunluk; i++)
    {
        char harf = sayilar[i];
        switch(harf)
        {
        case '0':
            strcat(text,"sifir ");
            break;
        case '1':
            strcat(text,"bir ");
            break;
        case '2':
            strcat(text,"iki ");
            break;
        case '3':
            strcat(text,"uc ");
            break;
        case '4':
            strcat(text,"dort ");
            break;
        case '5':
            strcat(text,"bes ");
            break;
        case '6':
            strcat(text,"alti ");
            break;
        case '7':
            strcat(text,"yedi ");
            break;
        case '8':
            strcat(text,"sekiz ");
            break;
        case '9':
            strcat(text,"dokuz ");
            break;
        }

    }
    printf("%s",text);
    ciktiOlustur(text);

}
void ciktiOlustur(char text[])
{

    FILE *dosya = fopen("quiz8.txt", "w");

    fprintf(dosya, text);
    printf("\nDosyaya kaydedilmistir.");
    fclose(dosya);

}
int main()
{
    int boyut = 1000;
    char sayilar[boyut];
    printf("Sayi giriniz: ");
    gets(sayilar);
    ekranaYaz(sayilar,strlen(sayilar));
    return 0;
}
