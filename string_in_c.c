#include <stdio.h>
int main()
{
     char s[10] = {'a','a','r','e','t','\0'};
     for (int i = 0; s[i] != '\0'; i++)
     {
          printf("%c",s[i]);
     }
     printf("\n%s\n",s);
     puts(s);
     return 0;
}