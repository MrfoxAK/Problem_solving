#include <stdio.h>
int main()
{
     int n,r,sum=0,place=1;
     printf("Enter a num: ");
     scanf("%d",&n);
     while (n>0)
     {
          r = n%2;
          sum = r*place+sum;
          // printf("%d ",r);
          n/=2;
          place*=10;
     }
     printf("%d ",sum);
     return 0;
}