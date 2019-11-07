// Fonksiyonlar
#include <stdio.h>
void catiyi_ciz()
{
    printf("       / \\    ");
    printf("\n      /___\\ ");
    printf("\n       | | ");
    printf("\n       |_| ");
    printf("\n      (___) ");
    printf("\n       | | ");
    printf("\n       | | ");
    printf("\n    /\\\\| | ");
    printf("\n   /  \\\\ | ");
    printf("\n  /    \\\\| ");
    printf("\n /      \\\\ ");
}
void kat_ciz()
{
    printf("\n ---------\n");
}
void daire_ciz()
{
    printf(" |      ||\n");
    printf(" |      ||\n");
    printf(" |      ||\n");
    printf(" |      ||\n");
}
void giris_ciz()
{
    printf(" |      ||\n");
    printf(" |      ||\n");
    printf(" |   _  ||\n");
    printf(" |  | | ||\n");
}

int mutlak(int c)
{
    if(c < 0)
        c= c*(-1);
    return c;
}

void ucgenCiz(int boyut)
{


    for(int i = 0; i<boyut; i++)
    {

        for(int a = 1; a<boyut-i; a++)
        {
            printf(" ");
        }
        for(int a = boyut+1; a>boyut-i; a--)
        {
            printf("*");
        }
        for(int a = boyut; a>boyut-i; a--)
        {
            printf("*");
        }

        /*
        *****
         ***
          *

        */

        printf("\n");
    }

    for(int i = 1; i<boyut; i++)
    {

        for(int a = boyut; a>boyut-i; a--)
        {
            printf(" ");
        }
        for(int a = 0; a<boyut-i; a++)
        {
            printf("*");
        }
        for(int a = 1; a<boyut-i; a++)
        {
            printf("*");
        }

        /*
        *****
         ***
          *

        */

        printf("\n");
    }
}

int main()
{
    /* // Ilk Program
        catiyi_ciz();
        kat_ciz();
        giris_ciz();
        kat_ciz();
    */
    /* // Mutlak Değer
        int a= -5, b;
        b= mutlak(a);
        printf("|%d| = %d ",a,b);
    */
    int a;
    printf("Giris: ");
    scanf("%d",&a);
    ucgenCiz(a);

    return 0;

}
