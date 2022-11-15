#include <stdio.h>

int max(int arr[],int start, int size){
     // printf("st %d \n",start);
     // printf("si %d \n",size);
     int max=0;
     for (int i = start; i <= size; i++)
     {
          if (max<arr[i])
          {
               max = arr[i];
          }
     }
     return max;
}

int min(int arr[],int start, int size){
     int min=arr[start];
     for (int i = start; i <= size; i++)
     {
          if (min>arr[i])
          {
               min = arr[i];
          }
     }
     return min;
}

int main()
{
     int curr_count=1,j=0,prev_count=0;
     int arr[] = {8,8,8,8};
     for (int i = 0; i < 4; i++)
     {
          curr_count=1;
          j=i+1;
          // printf("%d to %d max is %d\n",i,j,max(arr,i,j));
          // printf("%d to %d min is %d\n",i,j,min(arr,i,j));
          while ((max(arr,i,j)-min(arr,i,j))<=1)
          {
               curr_count++;
               // printf("%d ",curr_count);
               j++;
          }
          // printf("c is %d\n",curr_count);
          if (curr_count>prev_count)
          {
               prev_count = curr_count;
               // printf("p is %d\n",prev_count);
          }
     }
     printf("p is %d\n",prev_count);
     return 0;
}