#include <stdio.h>
/*

Condition
if(condition)
    if the condition is true
else if(condition)
    if the condition is true
else
    if the situation is not correct
*/
int main()
{
    int speed;
    printf("What is the speed of the car? : ");
    scanf("%d",&speed);
    if(speed >= 100)
        printf("The car is going too fast");
    else if(speed >= 50 && speed < 100)
        printf("The car is moving at medium speed.");
    else if(speed > 0 && speed < 50)
        printf("The car is moving slowly.");
    else if(speed < 0)
        printf("The car is going backwards.");
    else
        printf("The car won't move.");
    return 0;
}
