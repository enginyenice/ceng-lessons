#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct node
{
    int serverID;
    int members;
    float cost;
    float profit;
};

struct node liste[10000];
int satir_sayisi = 0;
char *dosya_adi = "..\\cost.txt";
void guncelle()
{


    FILE *dosya =fopen(dosya_adi,"w");


    for(int i = 0; i<satir_sayisi; i++)
    {
        fprintf(dosya,"%d,%d,%.2f,%.2f\n",liste[i].serverID,liste[i].members,liste[i].cost,liste[i].profit);//ald???m?z de?eri dosya i?erisine yazd?rd?k.
    }

    fclose(dosya);//dosyay? kapatt?k.



}

int kontrol(int id)
{
    for(int i = 0; i< satir_sayisi; i++)
    {
        if(liste[i].serverID == id)
        {
            return 1;
        }
    }
    return 0;

}
void add()
{
    int id,members;
    float cost,profit;
    printf("ID Degeri giriniz: ");
    scanf("%d",&id);
    int kont = kontrol(id);
    if(kont == 1)
    {
        printf("Boyle bir id var...\n");
        add();
    }
    else
    {
        printf("Kayit islemi\n");

        printf("members: ");
        scanf("%d",&members);

        printf("Cost: ");
        scanf("%f",&cost);

        printf("Profit: ");
        scanf("%f",&profit);


        liste[satir_sayisi].serverID = id;
        liste[satir_sayisi].members = members;
        liste[satir_sayisi].cost = cost;
        liste[satir_sayisi].profit = profit;
        satir_sayisi++;

    }
    guncelle();
    // system("cls");

}

void edit()
{
    int id;
    int members;
    float cost,profit;
    printf("ID Degeri giriniz: ");
    scanf("%d",&id);
    int kont = kontrol(id);
    if(kont != 1)
    {
        printf("Boyle bir id yok...\n");
        edit();
    }
    else
    {
        printf("Duzenleme islemi\n");
        int index = 0;
        for(int i = 0; i< satir_sayisi; i++)
        {
            if(liste[i].serverID == id)
            {
                index = i;
                break;
            }

        }

        printf("+--------------------------------------------------------+\n");
        printf("|    ID    |       members    |     cost    |   profit   |\n");
        printf("+--------------------------------------------------------+\n");
        printf("|%10d|%18d|%12.2f|%13.2f|\n",liste[index].serverID,liste[index].members,liste[index].cost,liste[index].profit);
        printf("+--------------------------------------------------------+\n");



        printf("Edit members: ");
        scanf("%d",&members);

        printf("Edit Cost: ");
        scanf("%f",&cost);

        printf("Edit Profit: ");
        scanf("%f",&profit);

        liste[index].serverID = id;
        liste[index].members = members;
        liste[index].cost = cost;
        liste[index].profit = profit;

        guncelle();
    }

}

void del()
{
    int id;
    printf("ID Degeri giriniz: ");
    scanf("%d",&id);
    int kont = kontrol(id);
    if(kont != 1)
    {
        printf("Boyle bir id yok...\n");
        del();
    }
    else
    {
        int index = 0;
        for(int i = 0; i< satir_sayisi; i++)
        {
            if(liste[i].serverID == id)
            {
                index = i;
                break;
            }

        }
        for (int c = index; c < satir_sayisi ; c++)
            liste[c] = liste[c+1];
        satir_sayisi -=1;
        guncelle();
    }
}
void satirParcala(char line)
{

}
void create()
{
    FILE * dosya_a;
    char a[300];
    char *file_name = dosya_adi;
    if ((dosya_a = fopen(file_name, "r")) == NULL)
    {
        FILE *dosya = fopen(dosya_adi, "w");
        fclose(dosya);
        printf("%s bulunamadi\n", file_name);
        create();
    }
    else
    {


        while ( fgets(a, 10000, dosya_a) != NULL )
        {
            char s[2] = ",";
            char *token;
            token = strtok(a, s);
            int sayac = -1;
            while( token != NULL)
            {
                sayac++;
                if(sayac == 0)
                {
                    //printf("Id: %s\n",(int)token);
                    liste[satir_sayisi].serverID = atoi(token);
                }
                else if(sayac == 1)
                {
                    //printf("members: %s\n",token);
                    liste[satir_sayisi].members = atof(token);
                }
                else if(sayac == 2)
                {
                    //printf("members: %s\n",token);
                    liste[satir_sayisi].cost = atof(token);
                }
                else if(sayac == 3)
                {
                    //printf("capasity: %s \n",token);
                    char mycopy[strlen(token)];
                    if(token[strlen(token)-1] == '\n')
                    {
                        strncpy(mycopy,token,strlen(token)-1);
                        liste[satir_sayisi].profit = atoi(mycopy);
                    }
                    else
                    {
                        strncpy(mycopy,token,strlen(token));
                        liste[satir_sayisi].profit = atoi(mycopy);

                    }
                    //printf("capasity: %s \n",mycopy);

                    sayac = -1;
                }
                token = strtok(NULL, s);


            }
            satir_sayisi++;
        }
    }
    fclose (dosya_a);
}
/*
+--------------------------------------------------------+
|    ID    |       members    |     cost    |   profit   |
+--------------------------------------------------------+
|         1|                10|    100.50|    200.50
+--------------------------------------------------------+
*/

void listData()
{
        printf("+--------------------------------------------------------+\n");
        printf("|    ID    |       members    |     cost    |   profit   |\n");
        printf("+--------------------------------------------------------+\n");
    //printf("|          1|           Eskisehir|              Turkey|\n
    for(int i = 0; i< satir_sayisi; i++)
    {
        printf("|%10d|%18d|%12.2f|%13.2f|\n",liste[i].serverID,liste[i].members,liste[i].cost,liste[i].profit);
        printf("+--------------------------------------------------------+\n");
    }

}
int main()
{

    create();
    while(1)
    {
        cout << "1-) Add" << endl;
        cout << "2-) Edit" << endl;
        cout << "3-) Delete" << endl;
        cout << "4-) List" << endl;
        cout << "5-) Back" << endl;
        int secim = 0;
        cin>>secim;
        switch(secim)
        {
        case 1:
            add();
            break;
        case 2:
            edit();
            break;
        case 3:
            del();
            break;
        case 4:
            listData();
            break;
        case 5:
            return 0;
            break;

        }

    }

    return 0;
}

