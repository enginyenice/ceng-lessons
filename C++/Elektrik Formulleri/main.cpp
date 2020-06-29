#include <iostream>
#include "eee.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {




while(1){
	system("PAUSE");
	system("CLS");
	printf("------Choose------ \n");
	printf("1-)Resistors in Series\n");
	printf("2-)Resistors in Parallel\n");
	printf("3-)Capacitive Reactance\n");
	printf("4-)Ohm's Law for AC'\n");
	
	int result;
	printf("Enter the value: ");
	scanf("%d",&result);
	
	switch(result)
	{
		case 1:
			Formul1 f1;
			f1.Hesapla();
			break;
		case 2:
			Formul2 f2;
			f2.Hesapla();
			break;
		case 3:
			Formul3 f3;
			f3.Hesapla();
			break;
		case 4:
			Formul4 f4;
			f4.Hesapla();
			break;
	}
	printf("\n");
}
//f1.Hesapla();

//f2.Hesapla();

//f3.Hesapla();

//f4.Hesapla();


	return 0;
}
