#include <stdio.h>
int main()
{
    int value = 36;
    for(int i=1;i<value;i++)
    {
        if((i*i) == value)
        {
            printf("Result: %d",i);
            break;
        }
        if((i*i) > value)
        {
            printf("Result: %d",i-1);
            break;
        }
    }
    return 0;
}
