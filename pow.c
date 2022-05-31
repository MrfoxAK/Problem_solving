#include<stdio.h>

int pow(int n,int m) {
    int val=1;
    for(int i=0; i<m; i++) {
        val=val*n;
    }
    printf("The Value is : %d\n",val);
}
int x=1;
int powrec(int n,int m) {
    
    if(m>0)
    {
        x=x*n;
        m--;
        powrec(n,m);
       
    }
    else
        printf("%d",x);
}

int main()
{
    int n;
    int m,f;
    printf("Enter the element : \n");
    scanf("%d",&n);
    printf("Enter power : \n");
    scanf("%d",&m);
    //pow(n,m);
    powrec(n,m);
  //  printf ("%d",f);
    return 0;
}