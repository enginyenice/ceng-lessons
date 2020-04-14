#include <stdio.h>
#include <stdlib.h>

// Palindrome Sayi
int tersCevir(int sayi)
{
    int tersSayi = 0;
    while(sayi> 0)
    {
      int basamak = sayi%10;
      tersSayi=tersSayi*10+basamak;
      sayi = sayi/10;
    }


    return tersSayi;
}

int main()
{
    int sayi = 99999999;


    for(int i = 11;i<sayi;i++)
    {
        int tersSayi = tersCevir(i);
            if(i == tersSayi)
                printf("%d \t",i);

    }

    return 0;
}
