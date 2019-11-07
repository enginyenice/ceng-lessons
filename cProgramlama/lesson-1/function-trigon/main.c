// Fonksiyonlar
#include <stdio.h>
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


}

int main()
{

    int a;
    printf("Giris: ");
    scanf("%d",&a);
    ucgenCiz(a);

    return 0;

}
