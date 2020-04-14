#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Saat sifirlaniyor sifirlanmassa sabit cikar
    srand(time(NULL));
    //50 Ile 100 arasinda bir sayi uretmek icin
    int x = 100+(rand()% 450)*2;
    printf("%d",x);
    return 0;
}
