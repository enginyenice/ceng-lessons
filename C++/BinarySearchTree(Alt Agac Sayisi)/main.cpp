#include <iostream>
#include "tree.h"
#include<time.h>




int main()
{
    srand(time(0));
    Islemler islemler;
    islemler.eklenmeSirasi = 0;

    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "ORHAN", "UYGAR ");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "TOLGA", "SERVET");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "TURAN", "KARAKAN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "MUAMMER", "KAYACAN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "SEVAY", "SEVER");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "ATILGAN", "SULHAN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "ATAALP", "CEYHUN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "CANSUNUR", "CERAN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "AYLA", "ERENEL");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "NURBANU", "YALIN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "SIDIKA", "ATAN");
    islemler.root = islemler.ekle(islemler.root, (rand() % 101), "MUZAFFER", "BOZKURT");

    system("PAUSE");
    islemler.ogrList();
    islemler.YonlerList();
}
