#include <stdio.h>
#include <math.h>

int main()
{
    int n,r,count=0,sum=0,temp;
    printf("Enter a num: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        count++;
        n/=10;
    }
    n=temp;
    // printf("%d ",count);
    // printf("%d ",n);
    while (temp>0)
    {
        r=temp%10;
        sum = sum + pow(r,count);
        temp/=10;
    }
    // printf("%d",sum);
    if (sum==n)
    {
        printf("The number you have entered is a Armstrong Number");
    }
    else{
        printf("The number you have entered is not a Armstrong Number");
    }
    
    return 0;
}





// // All Armstrong num in 1 to 1000;
// #include<stdio.h>
// int main()
// {
//     int n,r,x,s;
//     printf("Armstrong nums are\n");
//     for ( n = 1; n < 1000; n++)
//     {
//         s=0;
//         x=n;
//         while (x!=0)
//         {
//             r=x%10;
//             s=s+r*r*r;
//             x=x/10;
//         }
//         if(s==n){
//             printf("%d\n",s);
//         }
//     }

//     return 0;
// }



// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int n,r,temp=0,flag=0,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     temp=n;
//     while (n>0)
//     {
//         // r=n%10;
//         flag++;
//         n/=10;
//     }
//     // printf("%d",flag);
//     n=temp;
//     while (n>0)
//     {
//         sum = sum + pow((n%10),flag);
//         n=n/10;
//     }
//     // printf("The num is %d",sum);
//     if (sum==temp)
//     {
//         printf("The number you have entered is a Armstrong Number");
//     }
//     else{
//         printf("The number you have entered is not a Armstrong Number");
//     }
//     return 0;
// }









// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n,r,count=0,sum=0,temp;
//     printf("Enter a num: ");
//     scanf("%d",&n);
//     temp=n;
//     while (n>0)
//     {
//         r=n%10;
//         count++;
//         n/=10;
//     }
//     n=temp;
//     // printf("%d ",count);
//     // printf("%d ",n);
//     while (temp>0)
//     {
//         r=temp%10;
//         sum = sum + pow(r,count);
//         temp/=10;
//     }
//     // printf("%d",sum);
//     if (sum==n)
//     {
//         printf("The number you have entered is a Armstrong Number");
//     }
//     else{
//         printf("The number you have entered is not a Armstrong Number");
//     }
    
//     return 0;
// }





























































