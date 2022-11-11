#include <stdio.h>
#include<math.h>

int isPrime(int n)
{
     int FLAG=1;
     for (int i = 2; i <= sqrt(n); i++)
     {
          if (n % i == 0)
          {
               FLAG = 0;
               return 0;
          }
     }
     if (FLAG==1)
     {
          return 1;
     }
}

int main()
{
     int x = 34;
     for (int i = 1; i < x; i++)
     {
          if (isPrime(i) && isPrime(x - i))
          {
               printf("%d,%d\n", i, x - i);
          }
     }
     return 0;
}