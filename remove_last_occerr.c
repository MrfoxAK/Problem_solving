#include <stdio.h>
#include <string.h>

int main()
{
     int count[50], max = 0,c;
     char s[50];
     printf("Enter a string : ");
     gets(s);
     printf("Enter the character : ");
     c=getchar();

     int len = strlen(s);
     int i=0,j;
     for (i = 0; i < len; i++)
     {
          if (s[i]==c)
          // break;
          j = i;
     }
     for (i=j; i < len; i++)
     {
          s[i] = s[i+1];
     }
     printf("String after removing last '%c' : ",c);
     puts(s);
     return 0;
}
