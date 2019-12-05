#include <stdio.h>
#include <stdlib.h>



int faktoriyel(int sayi)
{
if(sayi <= 0)
    return 1;
else
    return sayi*faktoriyel(sayi-1);
}

int main()
{
    printf("%d",faktoriyel(10));
    return 0;
}
