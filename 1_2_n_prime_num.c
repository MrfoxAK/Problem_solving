#include <stdio.h>
int main()
{
     int n,isPrime;
     printf("Input upper limit: \n");
     scanf("%d", &n);
     for (int i = 2; i <= n; i++)
     {
          isPrime=1;
          for (int j = 2; j <= i/2; j++)
          {
               if (i%j==0)
               {
                    isPrime=0;
                    break;
               }
          }
          if (isPrime==1)
          {
               printf("%d ",i);
          }
          
     }
     return 0;
}

// /**
//  * C program to print all prime numbers between 1 to n
//  */

// #include <stdio.h>

// int main()
// {
//     int i, j, end, isPrime; // isPrime is used as flag variable

//     /* Input upper limit to print prime */
//     printf("Find prime numbers between 1 to : ");
//     scanf("%d", &end);

//     printf("All prime numbers between 1 to %d are:\n", end);

//     /* Find all Prime numbers between 1 to end */
//     for(i=2; i<=end; i++)
//     {
//         /* Assume that the current number is Prime */
//         isPrime = 1; 

//         /* Check if the current number i is prime or not */
//         for(j=2; j<=i/2; j++)
//         {
//             /*
//              * If i is divisible by any number other than 1 and self
//              * then it is not prime number
//              */
//             if(i%j==0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }

//         /* If the number is prime then print */
//         if(isPrime==1)
//         {
//             printf("%d, ", i);
//         }
//     }

//     return 0;
// }