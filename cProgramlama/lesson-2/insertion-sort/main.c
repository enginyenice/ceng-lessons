#include <stdio.h>
#include <stdlib.h>
void print_array(int arr[], int MAX);
void insertion_sort(int arr[],int MAX)
{
    int position,value;
    for(int i = 0; i<MAX;i++)
    {
        value       = arr[i];
        position    = i;

        while(position > 0 && arr[position-1]>value)
        {
            printf("%d ? %d\n",arr[position-1],value);

            arr[position]  = arr[position-1];
            position--;
        }
        if(position != i)
        {

            arr[position] = value;
            printf("swapped %d & %d \n",arr[position+1],arr[position]);
            print_array(arr,MAX);
            printf("***************\n"); }


    }
    print_array(arr,MAX);
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
int arr[] = {5,4,3,2,1,0};
int MAX = (sizeof(arr)/sizeof(arr[0]));
insertion_sort(arr,MAX);

return 0;
}
