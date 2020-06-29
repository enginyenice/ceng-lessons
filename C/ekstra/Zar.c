#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{

    int oyuncuBirZarBir=7,oyuncuBirZarIki=8,oyuncuIkiZarBir=9,oyuncuIkiZarIki=10,sira;
    /*
    *  1.oyuncu ilk zari, 1.oyuncu ikinci zari, 2.oyuncu ilk zari, 2.oyuncu ikinci zari , suanki sira
       oyuncularýn ilk degerlerine zarda olmayan ve birbirinden benzersiz degerler eklenerek
       while sorgusuna girmesi saglandi.
    */
    sira = 1; // ilk baslama sirasi 1 olarak belirlendi.
    char a; // klavyeden bir tusa basildiginda atama yapilacak deger
    int sayac= 0; // oyunun hangi turunda oldugunun sayilacagi deger.
    /** Birinci oyuncunun zarlari yada ikinci oyuncunun zarlari
        birbirine esit olana kadar donecek while*/
    while(oyuncuBirZarBir != oyuncuBirZarIki || oyuncuIkiZarBir != oyuncuIkiZarIki)
    {
        srand(time(NULL)); // srand fonksiyonuna time null degeri verilerek rastgele sayý uretme islemini sagladik.
        /*
        Sayac degerinin 4'e modu alinarak hangi oyuncuda siranin oldugu bulundu.
        0 -> 1.oyuncu 1.zar
        1 -> 2.oyuncu 1.zar
        2 -> 1.oyuncu 2.zar
        3 -> 2.oyuncu 2.zar
        */
        switch(sayac % 4)
        {
        case 0:
            printf("Oyuncu 1 zar atmak icin bir tusa basiniz.\n");
            a= getch(); // ekrandan rastgele bir deger aldik
            oyuncuBirZarBir = (1+(rand()% 5)); // 1. oyuncu 1.zar icin rastgele bir sayý uretildi 1 ile 6 arasinda
            printf("%d\n",oyuncuBirZarBir); // olusan deger  ekrana yazildi.
            sira = 2; // Sira degeri 2.oyuncuya verildi.
            break;
        case 1:
            printf("Oyuncu 2 zar atmak icin bir tusa basiniz\n");
            a= getch();  // ekrandan rastgele bir deger aldik
            oyuncuIkiZarBir = (1+(rand()% 5));  // 2. oyuncu 1.zar icin rastgele bir sayý uretildi 1 ile 6 arasinda
            printf("%d\n",oyuncuIkiZarBir); // olusan deger  ekrana yazildi.
            sira = 1; // Sira degeri 1.oyuncuya verildi.
            break;
        case 2:
            printf("Oyuncu 1 zar atmak icin bir tusa basiniz\n");
            a= getch(); // ekrandan rastgele bir deger aldik
            oyuncuBirZarIki = (1+(rand()% 5));  // 1. oyuncu 2.zar icin rastgele bir sayý uretildi 1 ile 6 arasinda
            printf("%d\n",oyuncuBirZarIki); // olusan deger  ekrana yazildi.
            sira = 2; // Sira degeri 2.oyuncuya verildi.
            break;
        case 3:
            printf("Oyuncu 2 zar atmak icin bir tusa basiniz\n");
            a= getch(); // ekrandan rastgele bir deger aldik
            oyuncuIkiZarIki = (1+(rand()% 5));  // 2. oyuncu 2.zar icin rastgele bir sayý uretildi 1 ile 6 arasinda
            printf("%d\n",oyuncuIkiZarIki); // olusan deger  ekrana yazildi.
            sira = 1; // Sira degeri 1.oyuncuya verildi.
            break;
        }
        sayac++; // sayac 1 arttirildi.
        /* 2 oyuncudan herhangi birinin 2 zari birbirine esitse donguden cikildi.*/
        if(oyuncuBirZarBir == oyuncuBirZarIki || oyuncuIkiZarBir == oyuncuIkiZarIki)
            break;

    }
    // Kacinci atisinda esitligin bulundugu hesaplandi
    float kacAtti = sayac / 2.0;
    if(sira == 1){
        // Sira 1 donmuse eger 2. oyuncu kazandi.
        printf("\nOyuncu 2 kazandi. %.0f. Zar attigindada bir onceki atmis oldugu zar degeri olan %d ile ayni degeri atmis oldu.",ceil(kacAtti),oyuncuIkiZarBir);
    } else {
        // Sira 2 donmuse eger 1. oyuncu kazandi.
        printf("\nOyuncu 1 kazandi. %.0f. Zar attigindada bir onceki atmis oldugu zar degeri olan %d ile ayni degeri atmis oldu.",ceil(kacAtti),oyuncuBirZarBir);
    }

    return 0;
}
