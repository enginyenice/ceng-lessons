#include <stdio.h>

/*
    Positive value finder
*/
int main()
{
    int value;
    do{
        printf("Enter positive value: ");
        scanf("%d", &value);
    } while(value < 0);
    printf("Success");
    return 0;
}
