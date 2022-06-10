#include <stdio.h>

int display_1_to_n_num(int l,int u){
     if (l>u)
     {
          return;
     }
     printf("%d ",l);
     display_1_to_n_num(l+1,u);
}

int main()
{
     int l,u;
     printf("Input lower limit: ");
     scanf("%d",&l);
     printf("Input upper limit: ");
     scanf("%d",&u);
     display_1_to_n_num(l,u);
     return 0;
}