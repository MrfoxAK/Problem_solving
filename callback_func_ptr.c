#include <stdio.h>

void A1(){
     printf("u r in A1\n");
}

void A2(){
     printf("u r in A2\n");
}

int sum(int a,int b){
     return a+b;
}

void greet(int (*fptr)(int,int)){
     printf("Hello user\n");
     printf("The sum is : %d\n",fptr(5,7));
}

void greet2(int (*fptr)(int,int)){
     printf("Hello Good Morning\n");
     printf("The sum is : %d\n",fptr(5,7));
}

void B(void (*p)()){
     (*p)();
}

int main()
{
     // printf("The sum is : %d\n",sum(2,6)); //testing func
     int (*fptr)(int,int);
     fptr = &sum;
     // greet2(fptr);
     // greet(fptr);
     void (*p)() = &A1;
     B(p);
     B(&A2);
     // printf("The sum is %d\n",(*fptr)(4,6));
     return 0;
}