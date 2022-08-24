#include <stdio.h>
int main()
{
     int u,sum=0;
     printf("Enter upper limit: ");
     scanf("%d",&u);
     for (int i = 0; i <= u; i++)
     {
          sum=0;
          for (int j = 1; j < i; j++)
          {
               if (i%j==0)
               {
                    sum+=j;
               }
          }
          if (sum==i)
          {
               printf("%d ",i);
          }
     }
     return 0;
}