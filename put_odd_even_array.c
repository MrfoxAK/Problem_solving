/**
 * C program to separate even and odd array elements in two separate array
 */

#include <stdio.h>

#define MAX_SIZE 1000  // Maximum size of the array

/* Function to print array */
void printArray(int arr[], int len);



int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    
    int evenCount, oddCount;
    int i, size;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printf("\nElements of even array: \n");
    printArray(even, evenCount);

    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);

    return 0;
}



/**
 * Print the entire integer array
 * @arr Integer array to be displayed or printed on screen
 * @len Length of the array
 */
void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}










// /**
//  * C program to separate even and odd array elements in two separate array
//  */
// #include <stdio.h>
// int main()
// {
//      int arr[100], oddarr[100], evenarr[100];
//      int size, count = 0;
//      int evenCount, oddCount;
//      printf("Enter the size of array : ");
//      scanf("%d", &size);
//      for (int i = 0; i < size; i++)
//      {
//           printf("Enter element of array at %d : ", i);
//           scanf("%d", &arr[i]);
//      }
//      evenCount = 0;
//      oddCount = 0;
//      for (int i = 0; i < size; i++)
//      {
//           if (arr[i] % 2 == 0)
//           {
//                evenarr[evenCount] = arr[i];
//                evenCount++;
//           }
//           else
//           {
//                oddarr[oddCount] = arr[i];
//                oddCount++;
//           }
//      }
//      // for printing array
//      for (int i = 0; i < evenCount; i++)
//      {
//           printf("%d ", evenarr[i]);
//      }
//      for (int i = 0; i < oddCount; i++)
//      {
//           printf("%d ", oddarr[i]);
//      }
//      return 0;
// }