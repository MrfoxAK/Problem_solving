#include <stdio.h>

int sum(int a,int b){
     return a+b;
}

int main()
{
     printf("The sum is : %d\n",sum(2,6)); //testing func
     int (*fptr)(int,int);
     fptr = &sum;
     printf("The sum is %d\n",(*fptr)(4,6));
     return 0;
}