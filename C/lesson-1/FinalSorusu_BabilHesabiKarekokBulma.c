#include <stdio.h>
float babil(int a)
{
	float e=0.000001;
	float y =1;
	float x= (float)a;
	while((x-y)>=e)
	{
		x = (x+y)/2;
		y = a/x;
	}
	return y;
	}
int main()
{
	float sonuc=babil(37);
	printf("%f",sonuc);
	return 0;
}
