#include <stdio.h>

void primeFactors(int n){
     int i = 2;
     int x = n;
     while (i<=x)
     {
          if(x%i == 0){
               printf("%d ",i);
               x=x/i;
          }
          else{
               i++;
          }
     }
}

int main()
{
     int n;
     printf("Enter the Num: ");
     scanf("%d",&n);
     primeFactors(n);
     return 0;
}