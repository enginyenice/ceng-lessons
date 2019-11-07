#include <stdio.h>
void buble_sort(int arr[],int MAX)
{
    int pass,mov;
    for(int pass=0; pass<MAX-1; pass++)
    {
        for(int mov = 0; mov<MAX-pass-1; mov++ )
        {
            if(arr[mov] > arr[mov+1])
            {
                int max,min;

                min = arr[mov+1];
                max = arr[mov];
                arr[mov] = min;
                arr[mov+1] = max;
            }

        }
    }
}
int main()
{
    int arr[ ]= {7,2,6,4,3,10,8,9,5,1};
    int MAX = (sizeof(arr)/sizeof(arr[0]));
    buble_sort(arr,MAX);


    for(int k = 0; k<MAX; k++)
    {
        printf(" %d ",arr[k]);
    }
    return 0;
}
