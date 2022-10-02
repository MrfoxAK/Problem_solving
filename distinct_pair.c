#include <stdio.h>
int main()
{
     int arr[] = {8, 12, 16, 4, 0, 20};
     int k=4;
     for (int i = 0; i < 6; i++)
     {
          for (int j = i+1; j < 6; j++)
          {
               if (arr[i]-arr[j]==k || arr[i]-arr[j]==-k)
               {
                    printf("%d,%d ",arr[i],arr[j]);
               }
          }
     }
     return 0;
}