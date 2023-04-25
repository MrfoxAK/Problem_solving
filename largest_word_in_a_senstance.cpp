#include <iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter n: ";
     cin >> n;
     cin.ignore();

     int ans=0;
     char arr[n+1];

     cout<<"Enter sentance: ";
     cin.getline(arr,n);
     cin.ignore();

     int count=0;
     int i=0;
     while (arr[i]!='\0')
     {
          if(arr[i]==' '){
               ans = max(ans, count);
               count=0;
          }
          else{
               count++;
          }
          i++;
     }
     cout<<"The max is : "<<ans<<endl;
     return 0;
}