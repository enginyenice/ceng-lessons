#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{

    int oyuncuBirZarBir=7,oyuncuBirZarIki=8,oyuncuIkiZarBir=9,oyuncuIkiZarIki=10,sira;
    sira = 1;
    char a;
    int sayac= 0;
    while(oyuncuBirZarBir != oyuncuBirZarIki || oyuncuIkiZarBir != oyuncuIkiZarIki)
    {
        srand(time(NULL));
        switch(sayac % 4)
        {
        case 0:
            printf("Oyuncu 1 zar atmak icin bir tusa basiniz.\n");
            a= getch();
            oyuncuBirZarBir = (1+(rand()% 5));
            printf("%d\n",oyuncuBirZarBir);
            sira = 2;
            break;
        case 1:
            printf("Oyuncu 2 zar atmak icin bir tusa basiniz\n");
            a= getch();
            oyuncuIkiZarBir = (1+(rand()% 5));
            printf("%d\n",oyuncuIkiZarBir);
            sira = 1;
            break;
        case 2:
            printf("Oyuncu 1 zar atmak icin bir tusa basiniz\n");
            a= getch();
            oyuncuBirZarIki = (1+(rand()% 5));
            printf("%d\n",oyuncuBirZarIki);
            sira = 2;
            break;
        case 3:
            printf("Oyuncu 2 zar atmak icin bir tusa basiniz\n");
            a= getch();
            oyuncuIkiZarIki = (1+(rand()% 5));
            printf("%d\n",oyuncuIkiZarIki);
            sira = 1;
            break;
        }
        sayac++;
        if(oyuncuBirZarBir == oyuncuBirZarIki || oyuncuIkiZarBir == oyuncuIkiZarIki)
            break;

    }
    float kacAtti = sayac / 2.0;
    if(sira == 1){
        printf("\nOyuncu 2 kazandi. %.0f. Zar attigindada bir onceki atmis oldugu zar degeri olan %d ile ayni degeri atmis oldu.",ceil(kacAtti),oyuncuIkiZarBir);
    } else {
        printf("\nOyuncu 1 kazandi. %.0f. Zar attigindada bir onceki atmis oldugu zar degeri olan %d ile ayni degeri atmis oldu.",ceil(kacAtti),oyuncuBirZarBir);
    }

    return 0;
}
