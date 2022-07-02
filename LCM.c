#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//      int n1,n2,max,i,lcm=1;
//      printf("Enter 1st num: \n");
//      scanf("%d",&n1);
//      printf("Enter 2nd num: \n");
//      scanf("%d",&n2);
//      max = n1>n2? n1:n2;
//      i=max;
//      while (1)
//      {
//           if(i%n1==0 && i%n2==0){
//                lcm = i;
//                break;
//           }
//           i=i+max;
//      }
//      printf("LCM of %d and %d = %d", n1, n2, lcm);
//      return 0;
// }



// #include <stdio.h>
// int main()
// {
//      int n1,n2,lcm=1;
//      printf("Enter 1st num : ");
//      scanf("%d",&n1);
//      printf("Enter 2nd num : ");
//      scanf("%d",&n2);
//      for (int i = 1; i <= n1 && i<= n2; i++)
//      {
//           if (n1%i==0 && n2%i==0)
//           {
//                lcm=lcm*i;
//                n1=n1/i;
//                n2=n2/i;
//           }
//      }
//      lcm = lcm*n1*n2;
//      printf("The LCM is : %d",lcm);
//      return 0;
// }