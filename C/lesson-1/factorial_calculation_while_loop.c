#include <stdio.h>

/*
    Loops
    Factorial Calculation
*/
int main()
{

    int value;
    int timer = 1;
    int result = 1;
    printf("Enter number: ");
    scanf("%d",&value);
    while(timer <= value)
    {
        result = result * timer;
        timer = timer +1;
    }
    printf("Result: %d",result);
    return 0;
}
