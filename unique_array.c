#include <stdio.h>
int main()
{
     int arr[100],freq[100];
     int size,count=0;
     printf("Enter the size of array : ");
     scanf("%d",&size);
     for (int i = 0; i < size; i++)
     {
          printf("Enter element of array at %d : ",i);
          scanf("%d",&arr[i]);
          freq[i] = -1;
     }
     for (int i = 0; i < size; i++)
     {
          count=1;
          for (int j = i+1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    count++;
                    freq[j] = 0;
               }
          }
          if (freq[i]!=0)
          {
               freq[i] = count;
          }
     }
     // Print all unique elements of array
     for (int i = 0; i < size; i++)
     {
          if (freq[i]==1)
          {
               printf("%d ",arr[i]);
          }
     }
     return 0;
}