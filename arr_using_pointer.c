#include <stdio.h>
int main()
{
     int n;
     printf("Enter the array size : ");
     scanf("%d",&n);
     int arr[n];
     int * ptr;
     ptr = arr;
     for (int i = 0; i < n; i++)
     {
          scanf("%d",ptr+i);
     }
     for (int i = 0; i < n; i++)
     {
          printf("Element at %d is : %d\n",i,*(ptr+i));
     }
     return 0;
}