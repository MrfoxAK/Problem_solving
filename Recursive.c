#include<stdio.h>
int main()
{
    int n,f=1,i;
    printf("Enter the num: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    printf("The factorial is:%d", f);
    }
    
    return 0;
}

// #include<stdio.h>

// int factorial(int number){
//     if (number==1 || number==0){
//         return (1);
//     }
//     else{
//         return (number * factorial(number-1));
//     }
// }


// int main()
// {
//     int num;
//     printf("Enter the number you want to factorial: \n");
//     scanf("%d", &num);\
//     printf("The factorial of %d is %d", num, factorial(num) );
//     return 0;
// }





#include<stdio.h>

int main()
{
    int n,f=1,i,temp;
    printf ("Enter a Number");
    scanf ("%d",&n);
    temp=n;
    if(n<0)
        n*=(-1);
    if(n!=0)
    {
        for(i=1;i<=n;i++)
        {
        f=f*i;
        }
        if(temp<0)
           f*=(-1);
    }
    printf ("The factorial is %d",f);
    return 0;
}













