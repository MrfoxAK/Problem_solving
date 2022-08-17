#include <stdio.h>
int main()
{
     int arr1[]={1,5,3,78,9,67};
     int arr2[]={8,88,6,2,11,99,45,5};
     int arr3[12];
     int i=0,j;
     for (j = 0; j < 6; j++)
     {
          arr3[j]=arr1[j];
     }
     while (i<8)
     {
          arr3[j] = arr2[i];
          j++;
          i++;
     }
     for (int k = 0; k < 14; k++)
     {
          printf("%d ",arr3[k]);
     }
     return 0;
}