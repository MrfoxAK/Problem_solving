#include <stdio.h>
int main()
{
     int n,flag;
     printf("Enter the num: \n");
     scanf("%d",&n);
     for (int i = 2; i <= n; i++)
     {
          flag=1;
          if (n%i==0)
          {
               for (int j = 2; j <= i/2; j++)
               {
                    if (i%j==0)
                    {
                         flag=0;
                         break;
                    }
               }
               if (flag==1)
               {
                    printf("%d ",i);
               }
          }
     }
     return 0;
}