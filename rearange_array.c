#include <stdio.h>
int main()
{
     int arr[] = {2 ,1 ,4 ,3 ,0 };
     int arr2[5];
     for (int i = 0; i < 5; i++)
     {
          arr2[i] = arr[i];
     }
     for (int i = 0; i < 5; i++)
     {
          arr[i] = arr2[arr2[i]];
     }
     for (int i = 0; i < 5; i++)
     {
          printf("%d ",arr[i]);
     }
     return 0;
}