// #include<stdio.h>
// int main()
// {
//     int n,r;
//     printf("Please Enter the number: ");
//     scanf("%d",&n);
//     for (int i = 2; i < n; i++)
//     {
//         r = n % i;
//         if (r==0){
//             printf("Note prime");
//         }
//         else{
//             printf("Prime");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n=37;
//     int isprime = 0;
//     for (int i = 2; i < n ; i++)
//     {
//         if (n%2==0){
//             isprime =1;
//         }
//     }
//     if (isprime==0){
//         printf("The number %d is prime\n",n);
//     }
//     else{
//         printf("The number %d is not a prime\n",n);
//     }

//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     int n, i,r;
//     printf("Enter n value: ");
//     scanf("%d", &n);
//     for (int i = 2; i < n; i++)
//     {
//         r = n%i;
//         if(r==0){
//             printf("The number you entered is not a Prime number");
//             break;
//         }
//         else{
//             printf("The number you entered is a Prime number");
//             break;
//         }
//     }
// }

#include <stdio.h>
int main()
{
    int n, flag=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
    {
        flag = 1;
    }
    for (int i = 2; i <= n/2; i++)
    {
        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    // flag is 0 for prime numbers
    if (flag == 0)
    {
        printf("%d is a Prime Number.", n);
    }
    else
    {
        printf("%d is not a Prime Number.", n);
    }
    return 0;
}
