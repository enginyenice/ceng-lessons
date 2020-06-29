#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;
struct node
{
    int serverID;
    char city[20];
    char country[20];
};


struct node liste[10000];
int satir_sayisi = 0;


char *dosya_adi = "..\\location.txt";
void guncelle(){


FILE *dosya =fopen(dosya_adi,"w");


for(int i = 0; i<satir_sayisi;i++)
{
    fprintf(dosya,"%d,%s,%s\n",liste[i].serverID,liste[i].city,liste[i].country);//ald???m?z de?eri dosya i?erisine yazd?rd?k.
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
    int id;
    char city[20],country[20];
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

        printf("City: ");
        cin>>city;

        printf("County: ");
        cin>>country;
        liste[satir_sayisi].serverID = id;
        strcpy(liste[satir_sayisi].city,city);
        strcpy(liste[satir_sayisi].country,country);
        satir_sayisi++;

    }
    guncelle();
    // system("cls");

}

void edit()
{
    int id;
    char city[20],country[20];
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

        printf("+----------------------------------------------------+\n");
        printf("|    ID    |          City      |       Country      |\n");
        printf("+----------------------------------------------------+\n");
        printf("|%10d|%20s|%20s|\n",liste[index].serverID,liste[index].city,liste[index].country);
        printf("+----------------------------------------------------+\n");

        printf("Edit City: ");
        scanf("%s",city);

        printf("Edit County: ");
        scanf("%s",country);
        liste[index].serverID = id;
        strcpy(liste[index].city,city);
        strcpy(liste[index].country,country);
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
                    //printf("City: %s\n",token);
                    strcpy(liste[satir_sayisi].city,token);
                }
                else if(sayac == 2)
                {
                    //printf("Country: %s \n",token);
                    if(token[strlen(token)-1] == '\n')
                        strncpy(liste[satir_sayisi].country,token,strlen(token)-1);
                    else
                        strcpy(liste[satir_sayisi].country,token);

                    sayac = -1;
                }
                token = strtok(NULL, s);


            }
            satir_sayisi++;
        }
    }
    fclose (dosya_a);
}

void listData()
{
    printf("+----------------------------------------------------+\n");
    printf("|    ID    |          City      |       Country      |\n");
    printf("+----------------------------------------------------+\n");
    //printf("|          1|           Eskisehir|              Turkey|\n
    for(int i = 0; i< satir_sayisi; i++)
    {
        printf("|%10d|%20s|%20s|\n",liste[i].serverID,liste[i].city,liste[i].country);
        printf("+----------------------------------------------------+\n");
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

