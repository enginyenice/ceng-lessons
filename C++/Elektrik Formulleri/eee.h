#ifndef EEEE_H
#define EEEE_H
#define _USE_MATH_DEFINES
 
#include <cmath>
#include <iostream>


class Formul1{
	public:
		Hesapla(){
		int n;
		float toplam;
		printf("How Many: ");
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		{
			float temp;
			printf("%d. Enter the value: ",(i+1));
			scanf("%f",&temp);
			toplam+=(temp);
		}
		printf("Resistors in Series: %f",toplam);

		}
};

class Formul2{
	public:
		Hesapla(){
		int n;
		float toplam;
		printf("How Many: ");
		scanf("%d",&n);
		for(int i = 0;i<n;i++)
		{
			float temp;
			printf("%d. Enter the value: ",(i+1));
			scanf("%f",&temp);
			toplam+=(1.0/temp);
		}
		printf("Resistors in Parallel %f",pow(toplam,-1));

		}
};

class Formul3{
	public:
		Hesapla(){
		
	float Frequence,CFarads,result;
	printf("Frequence: ");
	scanf("%f",&Frequence);
	printf("Capacitance in Fatads: ");
	scanf("%f",&CFarads);
	 result = 1 / (2*M_PI*Frequence*CFarads);
	 printf("Capacitive reactance: %f",result);
	 }
};


class Formul4{
	public:
		Hesapla(){
			printf("What value do you want to find?\n1-)Voltage (E) \n2-)Current in Ampere (I) \n3-)Indedance in ohms (Z)\nChoose: ");
			int response = 0;
			scanf("%d",&response);
			switch(response){
				case 1:
					EHesapla();
					break;
				case 2:
					IHesapla();
					break;
				case 3:
					ZHesapla();
					break;
			}
		}
		EHesapla(){
			float I,Z;
			printf("Current in Ampere (I): ");
			scanf("%f",&I);
			printf("Indedance in ohms (Z):");
			scanf("%f",&Z);
			
			printf("Voltage (E) : %f", (I*Z));
		}
		IHesapla(){
			float E,Z;
			printf("Voltage (E):  ");
			scanf("%f",&E);
			printf("Indedance in ohms (Z): ");
			scanf("%f",&Z);
			printf("Current in Ampere (I): %f", (E/Z));
		}
		ZHesapla(){
			float E,I;
			printf("Voltage (E):  ");
			scanf("%f",&E);
			printf("Current in Ampere (I): ");
			scanf("%f",&I);
			//printf("%f %f %f", E, I ,(E/I));
			printf("Indedance in ohms (Z): %f", (E/I));
			
		}
		




		
};

#endif
