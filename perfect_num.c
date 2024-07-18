#include <stdio.h>

int perfect_or_not(int num){
     int i = 1;
     int total = 0;
     while (i<num)
     {
          if (num % i == 0)
          {
               total += i;
          }
          i++;
     }
     if (total == num)
          return 1;
     else
          return 0;
}

int main()
{
     int num;
     printf("Enter the num: ");
     scanf("%d",&num);
     if (perfect_or_not(num))
          printf("The Number is Perfect\n");
     else
          printf("The Number is not Perfect\n");
     return 0;
}