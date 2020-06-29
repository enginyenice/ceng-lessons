#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,disk; // a,b,c ve diskriminant degiskenleri olusturuldu.
    printf("A^2 degerini giriniz: ");
    scanf("%f",&a); // a degeri alindi.

    printf("B degerini giriniz: ");
    scanf("%f",&b); // b degeri alindi.

    printf("C degerini giriniz: ");
    scanf("%f",&c); // c degeri alindi.

    disk = (b*b) - (4*a*c); // diskriminant hesaplandi b^2 - 4ac
    if(disk > 0) //diskriminant degeri buyukse 0'dan
    {
        printf("Iki gercel koku vardir.\n");
        float bir,iki; // 2 kok olacagi icin 2 adet float degisken olusturuldu.
        bir = (float)(((b*(-1))+ sqrt(disk)) / (2*a)); // (-b - karekok(disktriminan)) / 2a hesaplamasi yapildi.
        iki = (float)(((b*(-1)) - sqrt(disk)) / (2*a)); // (-b - karekok(disktriminan)) / 2a hesaplamasi yapildi.
        printf("1.Kok: %.3f\n2.Kok: %.3f\n",bir,iki); // cikan degerler ekrana yazdirildi.

    }else if(disk == 0)
    {
    float bir; // diskriminan 0 oldugunda 2 kok birbirine esit oldugu icin bir adet degisten olusturuldu.
    bir = -1.0 * b; // b degeri - ile carpildi.
    bir = (bir/(2*a)); // b/2a islemi yapildi ve bir degiskenine aktarildi.
    printf("Birbirine esit iki kok vardir %.3f\n",bir); // cikan degerler ekrana yazdirildi.

    } else
    {
        printf("Denklemin bir koku yoktur.\n"); // kok olmadigi icin kok yoktur degeri ekrana yazdirildi.

    }
    return 0;
}
