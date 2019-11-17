#include <stdio.h>

/*
    Step value
Enter value: 12345
5 x 1
4 x 10
3 x 100
2 x 1000
1 x 10000
*/
int main()
{

    int i,value;
    printf("Enter value: ");
    scanf("%d", &value);
    for(i = 1; ; i*= 10)
    {
        if(value/i == 0)
            break;

        int step = (value/i) % 10;
        printf("%d x %d\n", step,i);

    }

    return 0;
}
