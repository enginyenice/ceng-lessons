#include <stdio.h>

/*
    Switch Case
    Calculator
*/
int main()
{
    float first_value, final_value,result;
    char  operation;
    int status;

    printf("Enter\n");
    printf("4 * 3\t (Value) (Operator) (Value)\n");
    printf("Calculate :");
    scanf("%f %c %f",&first_value,&operation,&final_value);
    switch (operation)
    {
    case '+':
        result = first_value + final_value;
        break;
    case '-':
        result = first_value - final_value;
        break;
    case '*':
        result = first_value * final_value;
        break;
    case '/':
        if(final_value != 0)
        {
            result = first_value / final_value;
        }
        else
        {
            printf("Undefined");
            status = 1;
        }
        break;
    default:
        printf("Wrong choice !!");
        status = 1;
    }


    if(status != 1)
    {
        printf("Result : %.2f %c %.2f = %.2f",first_value,operation,final_value,result);
    }
    return 0;
}
