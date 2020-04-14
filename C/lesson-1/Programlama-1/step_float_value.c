#include <stdio.h>
int main()
{
    double value;
    int full;
    double decimals;
    int result = 1;
    printf("Enter Float Value: ");
    scanf("%lf",&value);
    full = floor(value);
    decimals = value - (double)full;

    printf("Full: %d  Decimal: %lf", full,decimals);
    if(full != 0)
    {
    while(full / 10 != 0)
    {
        full = full / 10;
        result++;
    }
    }
    if(full == 0)
    {
        result--;

    }
    int a = 1;
    while(1)
    {
        float x = decimals * a;
        a = a*10;
        if(x != ceil(x))
        {
            result++;
            continue;
        } else {
            break;
        }

    }

printf("\nResult: %d",result);
    return 0;
}
