#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *ilk=NULL,*son=NULL;


void SonaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }
    else
    {
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }

}
void BasaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        ilk->next=NULL;
        son=ilk;
    }
    else
    {

        yeni->next=ilk;
        ilk=yeni;
    }

}


// YOK
int Ara(int x)
{
    struct node *ara;
    ara=ilk;
    int sira=1;
    while(ara!=NULL)
    {
        if(ara->data==x)
        {
            return sira;
        }
        sira++;
        ara=ara->next;
    }
    return -1;

}


void Listele()
{
    struct node *liste;
    liste=ilk;
    while(liste!=NULL)
    {
        printf("%d ",liste->data);
        liste=liste->next;
    }

}

void Sil(int x)
{
    struct node *sil=ilk, *once=NULL;


    while(sil!=NULL)
    {
        if(sil->data==x) break;
        else
        {
            once=sil;
            sil=sil->next;
        }
    }





    if(sil!=NULL)
    {
        if(sil==ilk)
        {
            ilk=ilk->next;
        }


        else if(sil==son)
        {
            son=once;
            once->next=NULL;
        }



        else
        {
            once->next=sil->next;
        }


        free(sil);
    }
}


//yok
void Buble_link()
{
    struct node *liste;
    int t;
    while(1)
    {
        int kont=0;
        liste=ilk;
        while(liste->next!=NULL)
        {
            if(liste->data>liste->next->data)
            {
                int t=liste->data;
                liste->data=liste->next->data;
                liste->next->data=t;
                kont=1;
            }
            liste=liste->next;
        }

        if(kont==0) break;
    }




}
int main()
{

    SonaEkle(4);
    SonaEkle(7);
    SonaEkle(2);
    SonaEkle(3);
    SonaEkle(6);
    SonaEkle(9);
    SonaEkle(1);
    SonaEkle(8);
    Listele();
    printf("\n");
    Buble_link();
    Listele();
    return 0;
}
