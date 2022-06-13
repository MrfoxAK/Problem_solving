// #include <stdio.h>
// int main()
// {
//     int n,n1=0,n2=1,n3;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     printf("Enter the 3rd element:");
//     scanf("%d",&n3);
//     printf("%d %d ",n1,n2);
//     for (int i = 0; i <= n; i++)
//     {
//         n3 = n2+n1;
//         n1 = n2;
//         n2 = n3;

//         printf("%d ",n3);
//     }
    
//     return 0;
// }\




#include <stdio.h>

int fib(int n){
    if (n==1 || n==2)
    {
        return (1);
    }
    return(fib(n-1)+fib(n-2));
}

int main()
{
    int n;
    int arr[100];
    printf("Enter a num: \n");
    scanf("%d",&n);
    fib(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",fib(i));
    }
    
    return 0;
}

















