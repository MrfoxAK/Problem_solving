#include <stdio.h>
#define SIZE 3
int main()
{
     int A[SIZE][SIZE];
     int row, col, isIdentity;
     int flag=0,count=0;
     /* Input elements in matrix from user */
     printf("Enter elements in matrix of size 3x3: \n");
     for (row = 0; row < SIZE; row++)
     {
          for (col = 0; col < SIZE; col++)
          {
               scanf("%d", &A[row][col]);
          }
     }
     for (row = 0; row < SIZE; row++)
     {
          for (col = 0; col < SIZE; col++)
          {
               if (row==col && A[row][col]==1)
               {
                    count++;
               }
               else if (row!=col && A[row][col]!=0)
               {
                    flag=1;
               }
          }
     }
     if (count==SIZE && flag==0)
     {
          printf("It is an Identity matrix");
     }
     else
     {
          printf("Tt is not an Identity matrix");
     }
     return 0;
}