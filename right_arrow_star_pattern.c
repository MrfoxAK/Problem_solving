#include <stdio.h>
int main()
{
     int n = 5;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= 2*i+1; j++)
          {
               printf(" ");
          }
          for (int j = 0; j < n-i; j++)
          {
               printf("*");
          }
          printf("\n");
     }    
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= n-2*i+3 ; j++)
          {
               printf(" ");
          }
          for (int j = 0; j <= i; j++)
          {
               printf("*");
          }
          printf("\n");
     }
     return 0;
}