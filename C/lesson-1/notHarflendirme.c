#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
88-100 AA | 81-87 BA  | 74-80 BB | 67-73 CB  | 60-66 CC | 53-59 DC | 46-52 DD | 39-45 FD |0-38 FF
*/
void finalHesapla(int vize)
{
    float v = vize * 0.4;
    int gecmeNotlari[9] = {0,39,46,53,60,67,74,81,88};
    char *gecmeHarfleri[9] = {"FF","FD","DD","DC","CC","CB","BB","BA","AA"};
    float gerekli;
    for(int i = 0 ; i < 9; i++)
    {
        if(v <= gecmeNotlari[i])
        {
            gerekli = (float)gecmeNotlari[i] - v;
            gerekli = (gerekli * 100) / 60;
            if(gerekli > 100)
                continue;
            else
                printf("%s NOTUNU ALMANIZ ICIN GEREKEN PUAN: %.2f\n",gecmeHarfleri[i],gerekli);
        }

    }
}
int main()
{
    int vize;
    printf("Vize notunuz: ");
    scanf("%d", &vize);
    finalHesapla(vize);
    return 0;
}
