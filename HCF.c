#include <stdio.h>
int main()
{
     int n1,n2,hcf=1;
     printf("Enter the 1st num: \n");
     scanf("%d",&n1);
     printf("Enter the 2nd num: \n");
     scanf("%d",&n2);
     int i;
     for ( i = 1; i <= n1; i++)
     {
          if (n1%i==0 && n2%i==0)
          {
               hcf=i;
          }
     }
     printf("HCF of %d and %d = %d\n", n1, n2, hcf);
     return 0;
}