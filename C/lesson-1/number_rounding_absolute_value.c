#include <stdio.h>

/*
    Number rounding and absolute value
*/
int main()
{
    float  value = 3.29;
    int   absNumber = -20;
    float absFloatNumber = -22.33;
    printf("Ceil %f: %f\n", value,ceil(value));
    printf("Floor %f: %f\n", value,floor(value));
    printf("Round %f:, %f\n", value,round(value));

    printf("Number Abs %d: %d\n", absNumber,abs(absNumber));
    printf("(Incorrect) Float Number Integer Abs %f : %f\n", absFloatNumber,abs(absFloatNumber));
    // Use the fabs function to obtain the absolute value
    printf("Float Number Abs %f : %f\n", absFloatNumber,fabs(absFloatNumber));




    return 0;
}
