#include <stdio.h>

/*
    Loops
    Calculation of the square of a number
*/
int main()
{

    int value;
    int exit;
    while(exit != 1)
    {
        printf("Enter number (Enter 0 to close the program): ");
        scanf("%d",&value);
        if(value != 0)
        {
            value = value * value;
            printf("Square of the number: %d\n",value);
        }
        else if(value == 0)
        {
            exit = 1;
            printf("Good Bye :)");
        }

    }
    return 0;
}
