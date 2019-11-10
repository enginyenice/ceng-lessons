#include <stdio.h>
void arrayParses(int arr[],int MAX)
{
    int sort = 0;
    for(int i = 0; i<MAX; i++)
    {
        if(arr[i]< 0)
        {

            if(i != 0)
            {
                int temp = arr[sort];
                arr[sort] = arr[i];
                arr[i]    = temp;
                sort++;
            }
        }
    }
}

void print_array(int arr[], int MAX)
{
    int i;
    for (i=0; i < MAX; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[ ]= {10,14,-19,-26,27,-31,-33};
    int MAX = (sizeof(arr)/sizeof(arr[0]));
    arrayParses(arr,MAX);
    print_array(arr,MAX);
    return 0;
}
