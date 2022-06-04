#include <stdio.h>
int main()
{
     int n,r,sum=0,f,originalNum;
     printf("Enter a num: ");
     scanf("%d",&n);
     originalNum = n;
     while (n>0)
     {
          f=1;
          r = n%10;
          for (int i = 1; i <= r; i++)
          {
               f=f*i;
          }
          sum+=f;
          n/=10;
     }
     //printf("%d",sum);
     if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }
     return 0;
}