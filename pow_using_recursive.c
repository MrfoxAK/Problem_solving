#include <stdio.h>

int powr(int n,int p){
     if (p==0)
     {
          return 1;
     }
     else if (p>0)
     {
          return n*powr(n,p-1);
     }
     else
     {
          return 1/powr(n,-p);
     }
}

int main()
{
     int n,p;
     float power;
     printf("Enter a num: ");
     scanf("%d",&n);
     printf("Enter power: ");
     scanf("%d",&p);
     power = powr(n,p);
     printf("%d ^ %d = %f",n,p,power);
     return 0;
}