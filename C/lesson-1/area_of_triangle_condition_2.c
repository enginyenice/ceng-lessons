#include <stdio.h>


/* Calculation of the area of the triangle.

    (Floor Area * Hight) / 2;

*/
int main()
{
    int floor_area,hight;
    float result;
    printf("Floor Area: ");
    scanf("%d", &floor_area);
    printf("Hight: ");
    scanf("%d", &hight);
    result = (floor_area * hight) / 2;
    printf("Area of triangle: %f", result);
    return 0;
}
