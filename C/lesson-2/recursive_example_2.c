#include <stdio.h>




int sirala(int n)
{
    int s= (int)(n/10);
    if(n>10)
    {
        s   =sirala(s);

    }
    printf("%d ",n);


    return s;
}


int main()
{

    sirala(1234);
    return 0;
}
