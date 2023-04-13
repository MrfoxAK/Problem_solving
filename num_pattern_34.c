#include <stdio.h>
int main()
{
     int n = 5;
     int k = 1;
     for (int i = 0; i < n; i++)
     {
          k=1;
          k+=2*i;
          for (int j = 0; j < n-i; j++)
          {
               printf("%d",k);
               k+=2;
          }
          printf("\n");
     }
     return 0;
}