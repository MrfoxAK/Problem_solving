#include <stdio.h>
#include <math.h>

void check_every(int n)
{
     int i, j, temp3, k, flag = 0, temp1, temp2, count = 0, sum = 0, r1;
     temp1 = n;
     temp2 = n;
     // for checking prime number
     if (n == 0 || n == 1)
     {
          flag = 1;
     }
     for (i = 2; i <= n / 2; i++)
     {
          if (n % i == 0)
          {
               // printf("%d",i);
               flag = 1;
               break;
          }
     }
     if (flag == 0)
     {
          printf("%d is prime number\n", n);
     }
     else
     {
          printf("%d is not a prime number\n", n);
     }

     // for checking armstrong number
     while (temp1 > 0)
     {
          temp1 % 10;
          count++;
          temp1 /= 10;
     }
     // printf("%d",count);
     while (temp2 > 0)
     {
          r1 = temp2 % 10;
          sum = sum + pow(r1, count);
          temp2 /= 10;
     }
     // printf("%d", sum);
     if (sum == n)
     {
          printf("%d is a Armstrong Number\n", n);
     }
     else
     {
          printf("%d is not a Armstrong Number\n", n);
     }
     sum=0;
     temp3 = n;
     for (int z = 1; z < n; z++)
     {
          if (n % z == 0)
          {
               //   printf("%d ",i);
               sum += z;
          }
     }
     if (sum == temp3)
     {
          printf("%d is a perfect number\n", temp3);
     }
     else
     {
          printf("%d is not a perfect number\n");
     }
}

int main()
{
     int n;
     printf("Enter a num: ");
     scanf("%d", &n);
     check_every(n);
     return 0;
}