#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array1[10];
    int *parray[10];
    int parrayGosterici[10];
    srand(time(NULL));
    printf("rastgele tamsayilar olusan array1 dizisinin elemanlarinin adresleri ve degerleri\n");
    for(int i = 0; i< 10; i++)
    {
        array1[i] = (rand()% 10);
        printf("%X - %d\n",&array1[i],array1[i]);
    }
    printf("parray1 dizisinin gosterecegi elemanlar icin uretilen rastgele sayilar: \n");
    for(int k = 0; k<10; k++)
    {
        parrayGosterici[k] = (rand()% 10);
        printf("%d -",parrayGosterici[k]);
    }
    printf("\nparray1 dizisinin elemanlarini gosterdigi array1 elemanlarinin adresleri ve array1 degerlerini icerigi: \n");
    for(int l = 0; l<10; l++)
    {
        parray[l] = &array1[parrayGosterici[l]];
        printf("parray1[%d] - &array1[%d]= %X - *parray1[%d] = %d\n",l,parrayGosterici[l],parray[l],l,*parray[l]);
    }
    float harmonikTotal;
    for(int m = 0; m<10;m++)
    {
        float harmonik;
        if(*parray[m] != 0)
        {
         harmonik = (1.0/ *parray[m]);
         harmonikTotal+= harmonik;
        }

    }
    float harmonikOrtalama;
    harmonikOrtalama = 10 / harmonikTotal;
    printf("\Harmonik Ortalama %f",harmonikOrtalama);
    return 0;
}
