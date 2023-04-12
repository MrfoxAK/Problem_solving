#include <stdio.h>
int main()
{
     int n;
     printf("Enter the Row: ");
     scanf("%d", &n);
     int k = 1, f = 0;
     for (int i = 0; i < n+1; i++)
     {
          k = 1;
          f = 0;
          for (int j = 0; j < i * 2 + 1; j++)
          {
               if (i * 2 + 1 == j + 1 || j == 0)
               {
                    printf("*");
               }
               else if (j < i)
               {
                    printf("%d", k);
                    k++;
               }
               else
               {
                    printf("%d", k);
                    k--;
               }
          }
          printf("\n");
     }
     for (int i = 0; i < n; i++)
     {
          k = 1;
          for (int j = 0; j < n-i-1; j++)
          {
               if ( j == 0)
               {
                    printf("*");
               }
               printf("%d",k);
               k++;
          }
          for (int j = n-i-2; j > 0; j--)
          {
               printf("%d",j);
               if(j-1==0){
                    printf("*");
               }
          }
          printf("\n");
     }
     return 0;
}