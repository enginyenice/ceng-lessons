// Fonksiyonlar
#include <stdio.h>
int mutlak(int c)
{
    if(c < 0)
        c= c*(-1);
    return c;
}

int main()
{
        int a= -5, b;
        b= mutlak(a);
        printf("|%d| = %d ",a,b);



    return 0;

}
