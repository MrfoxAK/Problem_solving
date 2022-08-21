#include <stdio.h>
int main()
{
     int a[] = {1,2,3,4,5,6,7,8};
     int k=3,i=0,temp;
     int size=8;
     for (int i = 0; i < size; i=i+k)
     {
          int left=i;
          int right=i+k-1;
          while (left<right)
          {
               temp=a[left];
               a[left]=a[right];
               a[right]=temp;
               left++;
               right--;
          }
     }
     for (int i = 0; i < size; i++)
     {
          printf("%d ",a[i]);
     }
     return 0;
}