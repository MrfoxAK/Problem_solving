// C program to convert a string to upper case
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char string[1000];
//    printf("Input a string to convert to lower case\n");
//    gets(string);
//    printf("Characters in Uppercase: \"%s\"\n",strupr(string));
//    // strupr is use to convert lower case character to upper case
//    return  0;
// }


// C program to change string to upper case without strupr
#include <stdio.h>

void functionupper(char s[]){
     int i=0;
     while (s[i]!='\0')
     {
          if (s[i] >= 'a' && s[i] <= 'z')
          {
               s[i] = s[i]-32;
          }
          i++;   
     }
}

int main()
{
     char str[100];
     printf("Enter a string to convert it into upper case\n");
     gets(str);
     functionupper(str); // calling functionupper
     printf("Entered string in upper case is \"%s\"\n", str);
     return 0;
}