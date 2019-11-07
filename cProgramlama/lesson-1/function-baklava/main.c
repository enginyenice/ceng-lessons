// Fonksiyonlar
#include <stdio.h>
void baklavaCiz(int boyut)
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

        printf("\n");
    }
}

int main()
{
    int a;
    printf("Giris: ");
    scanf("%d",&a);
    baklavaCiz(a);

    return 0;

}
