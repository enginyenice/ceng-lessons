#include <stdio.h>
int main()
{
    int arr[ ]={10,14,19,26,27,31,33};
    int search_key = 27;
    for(int i = 0;i<10;i++)
    {
        if(arr[i] == search_key)
        {
            printf("arr[%d] search_key = %d",i,arr[i]);
            break;
        }
    }


    return 0;
}
