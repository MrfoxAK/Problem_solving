#include <stdio.h>
int main()
{
     int n;
     printf("Enter the Row: ");
     scanf("%d",&n);
     int k=1,f=0;
     for (int i = 0; i < n; i++)
     {
          k=1;
          f=0;
          for (int j = 0; j < i*2+1; j++)
          {
               if(k<i+1 && f==0){
                    printf("%d",k);
                    k++;
               }
               else{
                    f=1;
                    printf("%d",k);
                    k--;
               }
          }
          printf("\n");
     }
     return 0;
}