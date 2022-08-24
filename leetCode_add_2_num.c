#include <stdio.h>
int main()
{
     int n1=0,n2=0,sum=0,r;
     int l1[]={2,4,3},l2[]={5,6,4};
     int size=3;
     int l3[size];
     for (int i = size-1; i >= 0; i--)
     {
          n1=n1*10+l1[i];
     }
     for (int i = size-1; i >= 0; i--)
     {
          n2=n2*10+l2[i];
     }
     sum=n1+n2;
     // printf("%d",sum);
     int k=0;
     while (sum>0)
     {
          r=sum%10;
          l3[k]=r;
          sum/=10;
          k++;
     }
     for (int i = 0; i < size; i++)
     {
          printf("%d ",l3[i]);
     }
     return 0;
}