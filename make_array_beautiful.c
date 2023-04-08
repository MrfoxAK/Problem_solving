#include <stdio.h>
#include <stdlib.h>

struct stack
{
     int top;
     int *arr;
     int size;
};

int isEmpty(struct stack *ptr)
{
     if (ptr->top == -1)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}

int isFull(struct stack *ptr)
{
     if (ptr->top == ptr->size - 1)
     {
          return 1;
     }
     else
     {
          return 0;
     }
}

void *push(struct stack *p, int data)
{
     if (isFull(p))
     {
          printf("Stack OverFlow....\n");
     }
     else
     {
          p->top++;
          p->arr[p->top] = data;
     }
}

int pop(struct stack *p)
{
     if (isEmpty(p))
     {
          printf("Stack Underflow\n");
     }
     else
     {
          int x;
          x = p->arr[p->top];
          p->top--;
          return x;
     }
}

int stackTop(struct stack *sp)
{
     return sp->arr[sp->top];
}

int g=0;
int a[5];

void display(struct stack* ptr,int arr[]){
     for (int i = ptr->top; i >= 0; i--)
     {
          printf("|%d|",ptr->arr[i]);
          a[g] = ptr->arr[i];
          g++;
     }
}

void make_beautiful(int arr[],int n){
     struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
     sp->size=n;
     sp->top=-1;
     int p;
     for (int i = 0; i < n; i++)
     {
          if(arr[i]<0 && stackTop(sp)>=0 && !isEmpty(sp)){
               p = pop(sp);
               printf("%dpopped\n",p);
          }
          else{
               push(sp,arr[i]);
          }
     }
     display(sp,arr);
}

int main()
{
     int arr[] = {4,3,2,-2,-1,5};
     int n = 6;
     for (int i = 0; i < n; i++)
     {
          printf("%d, ",arr[i]);
     }
     make_beautiful(arr,n);
     printf("\nNow the array is.....");
     printf("\n");
     for (int i = 0; i < g; i++)
     {
          printf("%d, ",a[i]);
     }
     return 0;
}