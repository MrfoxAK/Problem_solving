#include<stdio.h>

int main()
{
    int arr[10];
    int n,r;
    printf("Enter a Num : \n");
    scanf("%d",&n);
    int i=0;
    while(n>0) {
        r=n%2;
        arr[i] = r;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
    printf("%d ",arr[j]);
    }
    return 0;
}