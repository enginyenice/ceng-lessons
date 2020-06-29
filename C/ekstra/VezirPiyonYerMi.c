#include <stdio.h>
#include <stdlib.h>

int tahta[8][8];

int vezirX,vezirY,piyonX,piyonY;
void dosyaOkuma()
{
    int x = 0;
    int y = 0;

    FILE *dosya = fopen("satranc.txt", "r");

    while(! feof(dosya) )
    {
        char a = fgetc(dosya);
        // printf("%c",a);
        if(a != '\n')
        {
            switch(a)
            {
            case '0':
                tahta[y][x] = 0;
                break;
            case '1':
                tahta[y][x] = 1;
                break;
            case '2':
                tahta[y][x] = 2;
                break;

            }

        }
        x++;
        if(a == '\n')
        {
            x = 0;
            y++;
        }


    }

    fclose(dosya);

    return 0;
}

void tahtayiCiz()
{
    for(int i = 0; i< 8; i++)
    {
        for(int k = 0; k< 8; k++)
        {
            printf("%d ",tahta[i][k]);
            if(tahta[i][k] == 2)
            {
                vezirX = k;
                vezirY = i;
            }
            if(tahta[i][k] == 1)
            {
                piyonX = k;
                piyonY = i;
            }
        }
        printf("\n");
    }

}
void yerMi()
{

    int x,y;
    x = vezirX;
    y = vezirY;
    int status = 0;
    while(x > -1 && y > -1)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x--;
        y--;
    }
    x = vezirX;
    y = vezirY;
    while(x < 9 && y < 9)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x++;
        y++;
    }

    x = vezirX;
    y = vezirY;
    while(x < 9 && y > -1)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x++;
        y--;
    }

    x = vezirX;
    y = vezirY;
    while(y < 9 && x > -1)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x--;
        y++;
    }


    x = vezirX;
    y = vezirY;
    while(x > -1)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x--;
    }
    x = vezirX;
    y = vezirY;
    while(x < 9)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        x++;
    }




    x = vezirX;
    y = vezirY;
    while(y > -1)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        y--;
    }
    x = vezirX;
    y = vezirY;
    while(y < 9)
    {
        if(tahta[y][x] == 1)
        {
            status = 1;
            break;
        }
        y++;
    }




    ciktiOlustur(status);

}

void ciktiOlustur(int status)
{
    FILE *fp;
    fp = fopen("satranc.txt","a");
    if(status == 1)
    {
        fprintf(fp,"\n%d%d pozisyonundaki vezir tasi %d%d pozisyonundaki piyon tasini yiyebilmektedir.",vezirY,vezirX,piyonY,piyonX);
        printf("%d%d pozisyonundaki vezir tasi %d%d pozisyonundaki piyon tasini yiyebilmektedir.",vezirY,vezirX,piyonY,piyonX);
    }
    else
    {
        fprintf(fp,"\n%d%d pozisyonundaki vezir tasi %d%d pozisyonundaki piyon tasini yiyememektedir..",vezirY,vezirX,piyonY,piyonX);
        printf("%d%d pozisyonundaki vezir tasi %d%d pozisyonundaki piyon tasini yiyememektedir.",vezirY,vezirX,piyonY,piyonX);
    }
    fclose(fp);
}
int main()
{
    dosyaOkuma();
    printf("\n");
    tahtayiCiz();
    yerMi();

    return 0;
}
