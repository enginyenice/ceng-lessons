
/*
#include<stdio.h>
int SP=-1;
void Push(int dizi[],int a)
{
   if (SP<10)
    {
      SP++;
      dizi[SP]=a;
    }
}
int Pop(int dizi[])
{
  if(SP>=0)
    {
       int gonder=dizi[SP];
       SP--;
       return gonder;
    }

}
Listele(int dizi[])
{
 for(int i=0; i<=SP;i++)
   printf(" %d",dizi[i]);

}
int main()
{
   int yigin[10];

   Push(yigin,20);
   Push(yigin,30);
   Push(yigin,10);
   Push(yigin,2);
   Push(yigin,25);
   Listele(yigin);
   int a=Pop(yigin);

   printf("\n");

    Push(yigin,40);
   Listele(yigin);

}

*/


/*
#include<stdio.h>

int on=0,arka=0,eleman=0;
int dizi[10];
void Ekle(int a)
{
    if(eleman<11)
    {
        dizi[arka]=a;
        arka++;
        eleman++;

    }
}
int Cikar()
{
    if(eleman>0)
    {
        int gonder=dizi[on];
        on++;
        if(on>9)
            on=0;
        eleman--;
        return gonder;
    }
}
Listele()
{
    for(int i=on; i!=arka; i++)
    {
        printf("%d ",dizi[i]);

    }
}
int main()
{

    Cikar();
     Cikar();
    Ekle(1);
    Ekle(2);
    Ekle(3);
    Ekle(4);
    Ekle(5);
    Ekle(6);
    Ekle(7);
    Ekle(8);
    Ekle(9);
    Ekle(10);
     Ekle(10);


    Listele();
}

  */








#include<stdio.h>
int SP=0;
int yigin[20];
int boy=20;
int doluluk=0;
void push(int a)
{
    if(dolumu())
    {
       doluluk++;

}
    else
    {
        yigin[SP]=a;
        SP++;
    }
}

int pop()
{
    if(bosmu())
    {printf("yiginda eleman yok");}
    else
    {
        SP--;
        int a=yigin[SP];
        return a;
    }

}
int bosmu()
{
    if (SP==0)
        return 1;
    return 0;
}
int dolumu()
{
    if (SP==boy+2)
        return 1;
    return 0;
}

void Listeleme()
{
    for (int i=0; i<SP; i++)
        printf("%d ",yigin[i]);
}

int main()
{
    for(int i=30;i<70;i++)
      push(i);

    Listeleme();

     printf("\n%d Tane Fazladan deger var yazamadim aga ",doluluk);


}


