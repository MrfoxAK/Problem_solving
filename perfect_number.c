// #include <stdio.h>
// int main()
// {
//     int n, k,sum=0;
//     printf("Input the number of terms : ");
//     scanf("%d", &n);
//     printf("The positive divisor : ");
//     for (int i = 1; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             printf("%d ",i);
//             sum+=i;
//         }
//     }
//     printf("\nThe sum of the divisor is : %d",sum);
//     return 0;
// }



#include<stdio.h>
void main()
{
    int n, i, sum;
    int mn, mx;
    printf("Input the starting range or number : ");
    scanf("%d", &mn);
    printf("Input the ending range of number : ");
    scanf("%d", &mx);
    printf("The Perfect numbers within the given range : ");
    for (n = mn; n <= mx; n++)
    {
        i = 1;
        sum = 0;
        while (i < n)
        {
            if (n % i == 0)
                sum = sum + i;
            i++;
        }
        if (sum == n)
            printf("%d ", n);
    }
    printf("\n");
}
