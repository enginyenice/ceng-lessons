#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100;
    int *p;
    p = &a;
    printf("Data: %d \n",a); // A nın değeri
    printf("Adress: %d \n",p); // Anın pointeri
    printf("Pointer Data: %d \n",*p);// Pointerin içindeki değer {100}
    return 0;
}
