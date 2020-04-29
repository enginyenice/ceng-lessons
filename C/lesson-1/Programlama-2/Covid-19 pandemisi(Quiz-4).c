#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//TURKIYE55AMERIKA33ALMANYA55ITALYA25CIN70
int main()
{
    char dizi[100];
    printf("Oran girin: ");
    gets(dizi);

    char tempDizi[100];
    int oranlar[100];
    char ulkeler[100][100];
    strcpy(tempDizi,dizi);
    char *sayiAyrac = "0123456789";
    char *harfAyrac = "QWERTYUIOPASDFGHJKLZXCVBNM";



    char *sayiParca = strtok(dizi,sayiAyrac);


    int i = 0;
    while(sayiParca != NULL)
    {
        strcpy(ulkeler[i],sayiParca);
        i++;
        sayiParca = strtok(NULL, sayiAyrac);
    }



    char *harfParca = strtok(tempDizi,harfAyrac);

    int a = 0;
    while(harfParca != NULL)
    {

        sscanf(harfParca,"%d",&oranlar[a]);

        a++;
        harfParca = strtok(NULL, harfAyrac);
    }
    ekranaYaz(oranlar,ulkeler,a);

    return 0;
}
void ekranaYaz(int oranlar[100],char ulkeler[100][100],int a)
{
    char ulkeSirali[100][100];
    int oranlarSirali[100];
    int k = a;
    int l = 0;
    while(k != 0)
    {
        int maks = 0;
        int indis = -1;
        for(int i = 0; i<a; i++)
        {
            if(oranlar[i] > maks)
            {
                maks = oranlar[i];
                indis = i;
            }
        }

        strcpy(ulkeSirali[l],ulkeler[indis]);
        oranlarSirali[l] = oranlar[indis];
        l++;
        oranlar[indis] = -1;
        k--;
    }

    char tmp[100];
    int tmpOran;



    for(int m = 0; m<a;m++)
    {
        for(int n = m; n<a;n++)
        {

            if(oranlarSirali[m] == oranlarSirali[n])
            {
                    char birinciMetin[100];
                    char ikinciMetin[100];
                    strcpy(birinciMetin,ulkeSirali[m]);
                    strcpy(ikinciMetin,ulkeSirali[n]);

                    if(strcmp(birinciMetin,ikinciMetin) > 0)
                    {
                        strcpy(ulkeSirali[n],birinciMetin);
                        strcpy(ulkeSirali[m],ikinciMetin);
                    }

            }


        }





    }



    for(int i = 0; i<a; i++)
    {
        printf("%s %d\n",ulkeSirali[i], oranlarSirali[i]);

    }




}
