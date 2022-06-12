#include <stdio.h>

int sum_of_n(int l, int u);

int main()
{
     int l, u, sum;
     printf("Input lower limit: ");
     scanf("%d", &l);
     printf("Input upper limit: ");
     scanf("%d", &u);
     sum = sum_of_n(l, u);
     printf("Sum of natural numbers from %d to %d is = %d", l, u, sum);
     return 0;
}

int sum_of_n(int l, int u)
{
     if (u == l)
     {
          return 1;
     }
     return (u + sum_of_n(l, u - 1));
}







// Another logic..........
// /**
//  * Recursively find the sum of natural number
//  */
// int sumOfNaturalNumbers(int start, int end)
// {
//     if(start == end)
//         return start;
//     else
//         return start + sumOfNaturalNumbers(start + 1, end); 
// }


