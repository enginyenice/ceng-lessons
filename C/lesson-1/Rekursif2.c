#include <stdio.h>
#include <stdlib.h>


void F1(int a)
{
    //Printf Uste yazilirsa bastan sona
    printf("%d ", a);
    if(a > 0)
        F2(a -1);
    //Printf Alta yazilirsa  sondan basa
}
void F2(int b)
{
    //Printf Uste yazilirsa bastan sona
    printf("%d ", b);
    if(b >0)
        F1(b-1);
    //Printf Alta yazilirsa  sondan basa
}
int main()
{
    F1(10);
    return 0;
}
