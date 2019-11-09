#include <stdio.h>
void swap(int arr[],int min,int max);


void selection_sort(int arr[],int MAX)
{
    int i,k,min;
    for(i = 0; i< MAX-1; i++)
    {
        min = i;
        for(k = i+1; k< MAX; k++)
        {
            if(arr[k] < arr[min])
            {
                min = k;
            }
        }
        if(min != i)
        {
            swap(arr,min,i);
        }
    }
}


void swap(int arr[],int min,int max)
{
    int temp = arr[min];
    arr[min] = arr[max] ;
    arr[max]   = temp;
}
void print_arr(int arr[],int MAX)
{

    for(int k = 0; k<MAX; k++)
    {
        printf(" %d ", arr[k]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5,4,3,2,1,0};
    int MAX = (sizeof(arr)/sizeof(arr[0]));
    print_arr(arr,MAX);
    selection_sort(arr,MAX);
    print_arr(arr,MAX);

    return 0;
}
