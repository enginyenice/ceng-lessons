#include <stdio.h>
int main()
{

    /*
    ****** = 5 yıldız +  \n
     ***   = 1 bosluk 3 yıldız  + \n
      *    = 2 bosluk 1 yıldız + \n
     ***   = 1 bosluk 3 yıldız + \n
    *****  = 5 yıldız + \n

    */


    int giris,yildiz,bosluk;
    printf("Giriş: ");
    scanf("%d", &giris);
    yildiz = giris+1;
    bosluk = 0;
    for(int a=0;a<giris/2;a++)
    {
        for(int b=0;b<bosluk;b++)
        {
            printf(" ");
        }
        for(int c=0;c<yildiz;c++)
        {
            printf("*");
        }
        yildiz = yildiz-2;
        bosluk++;
    printf("\n");
    }

    for(int a=0;a<=giris/2;a++)
    {
        for(int b=0;b<bosluk;b++)
        {
            printf(" ");
        }
        for(int c=0;c<yildiz;c++)
        {
            printf("*");
        }
        yildiz = yildiz+2;
        bosluk--;
    printf("\n");
    }



    return 0;
}
