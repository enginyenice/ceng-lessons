#include <stdio.h>




int yaz(int ilk,int son){

printf("%d ",ilk);
if(ilk<son) yaz(ilk+1,son-1);
}



int main()
{

yaz(1,10);
    return 0;
}
