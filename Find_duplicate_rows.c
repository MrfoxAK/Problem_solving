#include <stdio.h>
#include <math.h>

void duplicate_rows(int r, int c,int matrix[r][c]){
     int arr[c];
     int p = 0;
     int flag;
     int f = 0;
     int d=0;
     for (int i = 0; i < r; i++)
     {
          int deci=0;
          for (int j = 0; j < c; j++)
          {
               deci += matrix[i][j]*pow(2,j);
          }
          arr[i] = deci;
     }
     for (int i = 0; i < r; i++)
     {
          d=0;
          for (int j = 0; j < c; j++)
          {
               d += matrix[i][j]*pow(2,j);
          }
          for (int k = i+1; k < r; k++)
          {
               if(k!=i){
                    if(arr[k] == d){
                         printf("%d ",k);
                    }
               }
          }
     }
}

int main()
{
     int r,c;
     printf("Enter Row: ");
     scanf("%d",&r);
     printf("Enter Col: ");
     scanf("%d",&c);
     int matrix[r][c];
     for (int i = 0; i < r; i++)
     {
          for (int j = 0; j < c; j++)
          {
               printf("Enter data at %d,%d: ",i,j);
               scanf("%d",&matrix[i][j]);
          }
     }
     printf("\n");
     for (int i = 0; i < r; i++)
     {
          for (int j = 0; j < c; j++)
          {
               printf("%d ",matrix[i][j]);
          }
          printf("\n");
     }
     printf("\n");
     duplicate_rows(r,c,matrix);
     return 0;
}










// #include <stdio.h>

// void duplicate_rows(int r, int c,int matrix[r][c]){
//      int arr[c];
//      int flag;
//      for (int i = 0; i < r; i++)
//      {
//           for (int j = 0; j < c; j++)
//           {
//                arr[j] = matrix[i][j];
//           }
//           for (int p = i+1; p < r; p++)
//           {
//                flag = 0;
//                for (int q = 0; q < c; q++)
//                {
//                     if(arr[q]!=matrix[p][q])
//                          flag = 1;
//                }
//                if(flag == 0){
//                     printf("%d ",p);
//                }
//           }
//      }
// }

// int main()
// {
//      int r,c;
//      printf("Enter Row: ");
//      scanf("%d",&r);
//      printf("Enter Col: ");
//      scanf("%d",&c);
//      int matrix[r][c];
//      for (int i = 0; i < r; i++)
//      {
//           for (int j = 0; j < c; j++)
//           {
//                printf("Enter data at %d,%d: ",i,j);
//                scanf("%d",&matrix[i][j]);
//           }
//      }
//      printf("\n");
//      for (int i = 0; i < r; i++)
//      {
//           for (int j = 0; j < c; j++)
//           {
//                printf("%d ",matrix[i][j]);
//           }
//           printf("\n");
//      }
//      printf("\n");
//      duplicate_rows(r,c,matrix);
//      return 0;
// }