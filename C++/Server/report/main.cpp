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
    int members;
    float cost;
    float profit;
    int speed;
    int capasity;
};


int kacElemanli = 0;
struct node liste[10000];

char *dosya_adi_tech = "..\\tech.txt";
char *dosya_adi_location = "..\\location.txt";
char *dosya_adi_cost = "..\\cost.txt";
char *dosya_adi_report = "..\\report.txt";
char *dosya_adi_guncelle = "..\\guncelle.txt";
void location()
{

    int satir_sayisi = 0;
    FILE * dosya_a;
    char a[300];
    char *file_name = dosya_adi_location;
    if ((dosya_a = fopen(file_name, "r")) == NULL)
    {
        FILE *dosya = fopen(dosya_adi_location, "w");
        fclose(dosya);
        printf("%s bulunamadi\n", file_name);
        location();
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
            kacElemanli++;
        }
    }
    fclose (dosya_a);


}

void tech()
{


    int serverID;
    int speed;
    int capasity;

    int satir_sayisi = 0;
    FILE * dosya_a;
    char a[300];
    char *file_name = dosya_adi_tech;
    if ((dosya_a = fopen(file_name, "r")) == NULL)
    {
        FILE *dosya = fopen(dosya_adi_tech, "w");
        fclose(dosya);
        printf("%s bulunamadi\n", file_name);
        tech();
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
                    serverID = atoi(token);
                }
                else if(sayac == 1)
                {
                    //printf("speed: %s\n",token);
                    speed = atoi(token);
                }
                else if(sayac == 2)
                {
                    //printf("capasity: %s \n",token);
                    char mycopy[strlen(token)];
                    if(token[strlen(token)-1] == '\n')
                    {
                        strncpy(mycopy,token,strlen(token)-1);
                        capasity = atoi(mycopy);
                    }
                    else
                    {
                        strncpy(mycopy,token,strlen(token));
                        capasity = atoi(mycopy);

                    }


                    sayac = -1;
                }

                int kontrol = 0;
                for(int i = 0; i< kacElemanli; i++ )
                {
                    if(liste[i].serverID == serverID)
                    {
                        liste[i].speed = speed;
                        liste[i].capasity = capasity;
                        kontrol = 1;
                    }

                }
                if(kontrol == 0)
                {
                    liste[kacElemanli].serverID = serverID;
                    liste[kacElemanli].speed = speed;
                    liste[kacElemanli].capasity = capasity;
                    kacElemanli++;
                }



                token = strtok(NULL, s);


            }
            satir_sayisi++;
        }
    }
    fclose (dosya_a);



}

void costF()
{
    int satir_sayisi = 0;
    FILE * dosya_a;
    char a[300];
    int serverID;
    int members;
    float cost;
    float profit;
    char *file_name = dosya_adi_cost;
    if ((dosya_a = fopen(file_name, "r")) == NULL)
    {
        FILE *dosya = fopen(dosya_adi_cost, "w");
        fclose(dosya);
        printf("%s bulunamadi\n", file_name);
        costF();
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
                    serverID = atoi(token);
                }
                else if(sayac == 1)
                {
                    //printf("members: %s\n",token);
                    members = atof(token);
                }
                else if(sayac == 2)
                {
                    //printf("members: %s\n",token);
                    cost = atof(token);
                }
                else if(sayac == 3)
                {
                    //printf("capasity: %s \n",token);
                    char mycopy[strlen(token)];
                    if(token[strlen(token)-1] == '\n')
                    {
                        strncpy(mycopy,token,strlen(token)-1);
                        profit = atoi(mycopy);
                    }
                    else
                    {
                        strncpy(mycopy,token,strlen(token));
                        profit = atoi(mycopy);

                    }
                    //printf("capasity: %s \n",mycopy);

                    sayac = -1;
                }


                int kontrol = 0;
                for(int i = 0; i< kacElemanli; i++ )
                {
                    if(liste[i].serverID == serverID)
                    {
                        liste[i].members = members;
                        liste[i].cost = cost;
                        liste[i].profit = profit;
                        kontrol = 1;
                    }

                }
                if(kontrol == 0)
                {
                    /*
                    int serverID;
                    int members;
                    float cost;
                    float profit;
                    */
                    liste[kacElemanli].serverID = serverID;
                    liste[kacElemanli].members = members;
                    liste[kacElemanli].cost = cost;
                    liste[kacElemanli].profit = profit;
                    kacElemanli++;
                }



                token = strtok(NULL, s);


            }
            satir_sayisi++;
        }
    }
    fclose (dosya_a);

}

void create()
{
    location();
    tech();
    costF();
}

void guncelle(){
/*
    int serverID;
    char city[20];
    char country[20];
    int members;
    float cost;
    float profit;
    int speed;
    int capasity;
*/
FILE *dosya =fopen(dosya_adi_guncelle,"w");
for(int i = 0; i<kacElemanli;i++)
{
    fprintf(dosya,"%d,%s,%s,%d,%f,%f,%d,%d\n",liste[i].serverID,liste[i].city,liste[i].country,liste[i].members,liste[i].cost,liste[i].profit,liste[i].speed,liste[i].capasity);//aldy?ymyz de?eri dosya içerisine yazdyrdyk.
}

fclose(dosya);//dosyayy kapattyk.


}
void listele(){


/*
    int serverID;
    char city[20];
    char country[20];
    int members;
    float cost;
    float profit;
    int speed;
    int capasity;
    */
    printf("+-------------------------------------------------------------------------------------------------------------------+\n");
    printf("| ServerID |         city       |       country      |  members  |    cost    |   profit   |   speed   |  capasity  |\n");
    printf("+-------------------------------------------------------------------------------------------------------------------+\n");
for(int i = 0; i< kacElemanli;i++){
    printf("|%10d|%20s|%20s|%11d|%12.2f|%12.2f|%11d|%12d|\n",liste[i].serverID,liste[i].city,liste[i].country,liste[i].members,liste[i].cost,liste[i].profit,liste[i].speed,liste[i].capasity);
    printf("+-------------------------------------------------------------------------------------------------------------------+\n");
}
guncelle();


}

int main()
{
    create();
    listele();
    system("pause");
    return 0;
}

