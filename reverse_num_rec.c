// #include <stdio.h>

// int rev_rec(int n);

// int rev_rec(int n)
// {
//      int r, num = 0;
//      if (n < 10)
//      {
//           printf("%d",n);
//      }
//      else{
//      printf("%d",n%10);
//      rev_rec(n/10);
//      }
// }

// int main()
// {
//      int n, rev;
//      printf("Input number: ");
//      scanf("%d", &n);
//      printf("Reversed Number: ");
//      rev_rec(n);
//      // printf("Reverse : %d", rev);
//      return 0;
// }

#include <stdio.h>

int main()
{
     int num, reverse_number;

     // User would input the number
     printf("\nEnter any number:");
     scanf("%d", &num);

     // Calling user defined function to perform reverse
     reverse_number = reverse_function(num);
     printf("\nAfter reverse the no is :%d", reverse_number);
     return 0;
}

int sum = 0, rem;
reverse_function(int num)
{
     if (num)
     {
          rem = num % 10;
          sum = sum * 10 + rem;
          reverse_function(num / 10);
     }
     else
          return sum;
     return sum;
}
