#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,disk;
    printf("A^2 degerini giriniz: ");
    scanf("%f",&a);

    printf("B degerini giriniz: ");
    scanf("%f",&b);

    printf("C degerini giriniz: ");
    scanf("%f",&c);

    disk = (b*b) - (4*a*c);
    if(disk > 0)
    {
        printf("Iki gercel koku vardir.\n");
        float bir,iki;
        bir = (float)(((b*(-1))+ sqrt(disk)) / (2*a));
        iki = (float)(((b*(-1)) - sqrt(disk)) / (2*a));
        printf("1.Kok: %.3f\n2.Kok: %.3f\n",bir,iki);

    }else if(disk == 0)
    {
    float bir;
    bir = -1.0 * b;
    bir = (bir/(2*a));
    printf("Birbirine esit iki kok vardir %.3f\n",bir);

    } else
    {
        printf("Denklemin bir koku yoktur.\n");

    }
    return 0;
}
