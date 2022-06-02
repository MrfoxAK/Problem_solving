#include <stdio.h>
int main()
{
     int n1,n2,max,i,lcm=1;
     printf("Enter 1st num: \n");
     scanf("%d",&n1);
     printf("Enter 2nd num: \n");
     scanf("%d",&n2);
     max = n1>n2? n1:n2;
     i=max;
     while (1)
     {
          if(i%n1==0 && i%n2==0){
               lcm = i;
               break;
          }
          i=i+max;
     }
     printf("LCM of %d and %d = %d", n1, n2, lcm);
     return 0;
}