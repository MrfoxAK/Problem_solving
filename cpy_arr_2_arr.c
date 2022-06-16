#include <stdio.h>
int main()
{
     int a[10] = {2,35,6,7,8};
     int arr[10];
     for (int i = 0; i < 5; i++)
     {
          arr[i] = a[i];
     }
     // for printing array
     for (int j = 0; j < 5; j++)
     {
          printf("%d ",arr[j]);
     }
     
     return 0;
}