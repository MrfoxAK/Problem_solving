#include <stdio.h>
int main()
{
     int n, r1, r2, num = 0;
     printf("Enter the number: \n");
     scanf("%d", &n);
     while (n > 0)
     {
          r1 = n % 10;
          num = num * 10 + r1;
          n /= 10;
     }
     // printf("%d",num);
     while (num > 0)
     {
          r2 = num % 10;
          switch (r2)
          {
          case 0:
               printf("Zero ");
               break;
          case 1:
               printf("One ");
               break;
          case 2:
               printf("Two ");
               break;
          case 3:
               printf("Three ");
               break;
          case 4:
               printf("Four ");
               break;
          case 5:
               printf("Five ");
               break;
          case 6:
               printf("Six ");
               break;
          case 7:
               printf("Seven ");
               break;
          case 8:
               printf("Eight ");
               break;
          case 9:
               printf("Nine ");
               break;
          }
          num /= 10;
     }

     return 0;
}
