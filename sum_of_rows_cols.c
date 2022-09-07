#include <stdio.h>
#define SIZE 3
int main()
{
     int A[SIZE][SIZE];
     int row, col, sum = 0;

     /* Input elements in matrix from user */
     printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
     for (row = 0; row < SIZE; row++)
     {
          for (col = 0; col < SIZE; col++)
          {
               scanf("%d", &A[row][col]);
          }
     }

     // for row sum
     for (int i = 0; i < SIZE; i++)
     {
          sum=0;
          for (int j = 0; j < SIZE; j++)
          {
               sum+=A[i][j];
          }
          printf("Sum of %d row is %d\n",i+1,sum);
     }
     
     // for col sum
     for (int i = 0; i < SIZE; i++)
     {
          sum=0;
          for (int j = 0; j < SIZE; j++)
          {
               sum+=A[j][i];
          }
          printf("Sum of %d col is %d\n",i+1,sum);
     }
     
     return 0;
}