#include <stdio.h>

// Linear search
int Linersearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        return -1;
    }
}


// Binary search
int Binarysearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    // start searching
    // Keep searching until low<=high
    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1; 
        }
    }
    // searching ending
    return -1;
}

int BS(int arr[],int low,int high,int data){
    // printf("low %d\n",low);
    // printf("high %d\n",high);
    if(low>=high-1){
        return 0;
    }
    int mid = (low+high)/2;
    if (arr[mid]==data)
    {
        return 1;
    }
    else if (data>arr[mid])
    {
        BS(arr,mid,high,data);
    }
    else
    {
        BS(arr,low,mid,data);
    }
}

int main()
{
    // Unsorted array for linear search
    // int arr[] = {1,23,45,5,56,677,889,9,121};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 67;
    // Sorted array for Binary search
    int arr[] = {1,23,45,55,56,67,88,91,121};
    int size = sizeof(arr)/sizeof(int);
    int element = 1121;
    // int sb = Linersearch(arr,size,element);
    int sb = Binarysearch(arr,size,element);
    // if(sb==1){
    //     printf("The element %d is found at index: %d\n",element,sb);
    // }
    // else
    // {
    //     printf("Not found\n");
    // }
    if(BS(arr,0,size,121)){
        printf("The element is found\n");
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}