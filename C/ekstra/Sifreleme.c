#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char alfabe[24]= "abcdefghijklmnopqrstuvwxyz";

int modAl(int x,int N){
    return (x % N + N) %N;
}

int alfabeArama(char harf)
{
    for(int i=0; i<strlen(alfabe); i++)
    {
        if (alfabe[i] == harf)
            return (i);
    }

}
void sifrele(char metin[],char anahtar[])
{
    int hangiKarakter;
    int anahtarAlf;
    int metinAlf;
    for(int i = 0; i< strlen(metin); i++)
    {

        hangiKarakter = i%3;

        switch(hangiKarakter)
        {
        case 0:
            anahtarAlf = alfabeArama(anahtar[0]);
            metinAlf = alfabeArama(metin[i]);
            break;
        case 1:
            anahtarAlf = alfabeArama(anahtar[1]);
            metinAlf = alfabeArama(metin[i]);
            break;
        case 2:
            anahtarAlf = alfabeArama(anahtar[2]);
            metinAlf = alfabeArama(metin[i]);
            break;
        }
        int index = (anahtarAlf+metinAlf);
        int mod = modAl(index,26);
        //printf("%d %d %d %c\n",index,anahtarAlf,metinAlf,alfabe[index]);
        printf("%c",alfabe[mod]);

    }
}

void cozumle(char metin[],char anahtar[])
{
    int hangiKarakter;
    int anahtarAlf;
    int metinAlf;
    for(int i = 0; i< strlen(metin); i++)
    {

        hangiKarakter = i%3;

        switch(hangiKarakter)
        {
        case 0:
            anahtarAlf = alfabeArama(anahtar[0]);
            metinAlf = alfabeArama(metin[i]);
            break;
        case 1:
            anahtarAlf = alfabeArama(anahtar[1]);
            metinAlf = alfabeArama(metin[i]);
            break;
        case 2:
            anahtarAlf = alfabeArama(anahtar[2]);
            metinAlf = alfabeArama(metin[i]);
            break;
        }
        int index = (metinAlf-anahtarAlf);
        int mod = modAl(index,26);
        //printf("%d-%d = %d mod %d %c\n",metinAlf,anahtarAlf,index,mod,alfabe[mod]);
        printf("%c",alfabe[mod]);

    }
}
int main()
{

    char anahtar[3];
    char metin[10];
    int secim;
    printf("Uc karakterli anahtar kelime giriniz: ");
    scanf("%s",anahtar);

    printf("En fazla 10 karakterli bir metin yaziniz: ");
    scanf("%s",metin);

    printf("1. sifrele\n");
    printf("2. sifre coz\n");
    printf("?");
    scanf("%d",&secim);

    switch(secim)
    {
    case 1:
        sifrele(metin,anahtar);
        break;
    case 2:
        cozumle(metin,anahtar);
        break;
    }

    return 0;
}
