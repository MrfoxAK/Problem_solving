#include <stdio.h>

int sum_of_n_num(int n){
    while (n!=0)
    {
        return n + sum_of_n_num(n-1);
    }
}

int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d",&n);
    printf("The sum is : %d",sum_of_n_num(n));
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n = 423, r ,sum=0;

//     while (n>0)
//     {
//         r = n%10;
//         n = n/10;
//         sum = sum+r;
//         printf("%d", sum);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,r=0;
//     printf("Please Enter the num: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         r = r + i;
//     }
//     printf("%d",r);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int n=1,sum=0;
//   do
//   {
//     sum+=n;
//     n++;
//   } while (n<=2);
//   printf("The sum is : %d\n",sum);

//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,r,sum=0;
//     printf("Enter the num\n");
//     scanf("%d",&n);

//     for (int i = 0; i <= n; i++)
//     {
//         // r=i%10;
//         sum = sum+i;
//         // n=n/10;
//     }
//     printf("The sum is: %d",sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0;
//     printf("Enter the num\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         sum+=i;
//         printf("%d ", sum);
//     }

//     return 0;
// }










// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0;
//     printf("Enter the num\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ",i*i+1);
//     }

//     return 0;
// }
