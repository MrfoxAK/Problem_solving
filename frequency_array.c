// #include <stdio.h>
// int main()
// {
//      int arr[100];
//      int size, count = 0, key;
//      printf("Enter the size of array : ");
//      scanf("%d", &size);
//      for (int i = 0; i < size; i++)
//      {
//           printf("Enter element of array at %d : ", i);
//           scanf("%d", &arr[i]);
//      }
//      printf("Enter the num you want to search : ");
//      scanf("%d", &key);
//      for (int i = 0; i < size; i++)
//      {
//           if (arr[i] == key)
//           {
//                count++;
//           }
//      }
//      printf("%d", count);
//      return 0;
// }

#include <stdio.h>
int main()
{
     int arr[100],freq[100];
     int size,count=0;
     printf("Enter the size of array : ");
     scanf("%d",&size);
     for (int i = 0; i < size; i++)
     {
          printf("Enter element of array at %d : ",i);
          scanf("%d",&arr[i]);
          freq[i] = -1;
     }
     for (int i = 0; i < size; i++)
     {
          count=1;
          for (int j = i+1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    count++;
                    freq[j] = 0;
               }
          }
          if (freq[i]!=0)
          {
               freq[i] = count;
          }
     }
     printf("Count of array elements are......\n");
     for (int i = 0; i < size; i++)
     {
          if (freq[i]!=0)
          {
               printf("in the array %d occurs %d times\n",arr[i],freq[i]);
          }
     }
     return 0;
}