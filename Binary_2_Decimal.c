// #include <stdio.h>
// #include <math.h>

// int main()
// {
//      int r1,r2,count=0,n,temp,sum=0;
//      printf("Enter a Binary num: ");
//      scanf("%d",n);
//      temp = n;
//      while (temp>0)
//      {
//           r1 = temp%10;
//           count++;
//           temp/=10;
//      }
//      while (n>0)
//      {
//           r2 = n%10;
//           for (int i = 0; i < count; i++)
//           {
//                sum = sum + (pow(2,i)*r2);
//           }
//           n/=10;
//      }
//      printf("The sum is : %d",sum);

//      return 0;
// }

// /**
//  * C program to convert binary number system to decimal number system
//  */

// #include <stdio.h>
// #include <math.h>

// #define BASE 2

// int main()
// {
//     long long binary, decimal=0, tempBinary;
//     int i=0;

//     printf("Enter any binary number: ");
//     scanf("%lld", &binary);
//      tempBinary = binary;
//     while (tempBinary!=0)
//     {
//          if (tempBinary%10==1)
//          {
//               decimal+= pow(BASE,i);
//          }
//          i++;
//          tempBinary/=10;
//     }

//     printf("Binary number = %lld\n", binary);
//     printf("Decimal number= %lld", decimal);

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
     long long binary, decimal = 0, tempBinary;
     int i=0;
     printf("Enter any binary number: ");
     scanf("%lld", &binary);
     tempBinary=binary;

     while (binary)
     {
          decimal = decimal + pow(2,i)*(binary%10);
          binary/=10;
          i++;
     }
     printf("%lld decimal of this num is %lld",tempBinary,decimal);
     return 0;
}
