#include <stdio.h>
#include <stdlib.h>




int binary_search(int arr[],int MAX,int search_key)
{
    int low=0;
    int mid;
    int hight = MAX-1;

    while(low<=hight)
    {
        mid = (low+hight)/2;
        //ortadaysa
        if(arr[mid] == search_key)
        {
            return mid;
        }
        //ortancadan büyükse
        if(arr[mid]<search_key)
        {
            low = mid+1;
        }
        //ortancadan küçükse
        if(arr[mid]>search_key)
        {
            hight = mid-1;
        }
    }
return -1;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int search_key = 2;
    int MAX = (sizeof(arr)/sizeof(arr[0]));
    int binary_search_index;

    binary_search_index = binary_search(arr,MAX,search_key);
    if(binary_search_index != -1)
    {
        printf("The value <%d>, Index [%d] ",search_key,arr[binary_search_index]);
    }
    else if(binary_search_index == -1)
    {
        printf("<%d> Not Found!!!",search_key);
    }

    return 0;
}
