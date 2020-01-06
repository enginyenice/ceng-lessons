#include <stdio.h>
int enBuyuk(int dizi1[],int dizi2[],int uzunluk)
{
	for(int a=0;a<uzunluk;a++)
	{
		if(dizi1[a] > dizi2[a])
		  return 1;
		if(dizi2[a] > dizi1[a])
		  return -1;
	}
	return 0;
}
int main(){

	int dizi1[10] ={1,2,3,4,5,6,7,8,9,0};
	int dizi2[10] ={1,2,3,4,5,6,7,8,9,9};


	int sonuc =enBuyuk(dizi1,dizi2,10);

	if(sonuc == 1)
        printf("Birinci sayi buyuk");
    else if(sonuc == -1)
        printf("Ikinci sayi buyuk");
    else
        printf("Sayilar birbirine esit");
	return 0;
}
