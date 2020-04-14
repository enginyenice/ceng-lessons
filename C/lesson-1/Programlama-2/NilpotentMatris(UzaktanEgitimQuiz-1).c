#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int boyut;
int nilpotent(int matris[boyut][boyut])
{
    int matrisCarpimi[boyut][boyut];
    int toplam=0;
    int i,j,k;
    for(i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {

            for(toplam=0, k=0; k<boyut; k++)
                toplam += matris[i][k]*matris[k][j];
            matrisCarpimi[i][j] = toplam;
        }
    }



    for(int i = 0; i<boyut; i++)
    {
        for(int k = 0; k<boyut; k++)
            if(matrisCarpimi[i][k] != 0)
                return 0;
    }
    return 1;
}
int main()
{
    srand(time(NULL));
    printf("Olusturulacak boyunu giriniz!\n");
    scanf("%d", &boyut);
    int matris[boyut][boyut];



    printf("\n\nOlusturulan matris:\n");
    for(int i = 0; i< boyut; i++)
    {
        for(int k = 0; k< boyut; k++)
        {
            matris[i][k] = rand()%20 - rand()%10;
            printf("%d ",matris[i][k]);
        }
        printf("\n");
    }


    int x = nilpotent(matris);
    if(x == 0)
        printf("\nMatris nilpotent DEGILDIR!.");
    else
        printf("\nMatris nilpotent dir");
    return 0;
}
