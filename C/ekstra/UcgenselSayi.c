#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define aramaMiktari 1000
#define ekranaYaz (aramaMiktari / 10)
int ucgenselSayi(int sayi)
{
    int ucgensel = ((sayi * sayi) + sayi)/2;
    int bolenSayisi = 0;
    for(int i = 1; i<= ucgensel; i++)
    {
        float bolum = ((float)ucgensel / (float)i);
        if(floor(bolum) == bolum)
        {
            bolenSayisi++;
        }

    }
    return bolenSayisi;

}

void asalOlanOranlar()
{
    printf("Ilk          | Asal miktari | Asal olmayan miktar | Oran|\n");
    printf("---------------------------------------------------------\n");
    int asalSayiAdeti = 0;
    for(int i = 2; i<= aramaMiktari; i++)
    {
        if(i%ekranaYaz == 0)
        {
            int oran = (asalSayiAdeti * 100) / i;
                printf("2 - %8d |%14d|%21d| %3d%%|\n",i,asalSayiAdeti,(i-asalSayiAdeti - 1),oran);
        }
        int donus = asalMi(i);
        if(donus == 0)
            asalSayiAdeti++;
    }

}

int asalMi(int sayi)
{
    for(int i = 2;i<(sayi-1);i++)
    {

        if((sayi-1)%i == 0)
        {
            return 1;
        }
    }

    if((sayi -1) == 1)
    {
        return 1;
    }
    return 0;

}
int main()
{
    /*
       int sayi = 1;
       int bolenSayisi = 1;
       while(bolenSayisi < 199)
       {
           bolenSayisi = ucgenselSayi(sayi);
           printf("%d %d %d\n",sayi,(((sayi * sayi) + sayi)/2),bolenSayisi);
           sayi++;

       }
       int SonUcgensel = ((((sayi-1) * (sayi-1)) + (sayi-1))/2);

       for(int i = 1; i<= SonUcgensel;i++)
       {
           float bolum = ((float)SonUcgensel / (float)i);
           if(floor(bolum) == bolum)
           {
               printf("%.0f ",bolum);
           }

       }
    */

    asalOlanOranlar();



    return 0;
}
