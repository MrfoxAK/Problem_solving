#include <stdio.h>
int main()
{
     int sum=0,max=0;
     int arr[] = {-2,-3,4,-1,-2,1,5,-3};
     int subarray[8];
     for (int i = 0; i < 8; i++)
     {
          sum=sum+arr[i];
          if (sum>max)
          {
               max=sum;
          }
          if (sum<0)
          {
               sum=0;
          }
     }
     printf("The max sum is %d",max);
     return 0;
}