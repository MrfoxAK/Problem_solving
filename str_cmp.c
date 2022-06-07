#include <stdio.h>
#include <string.h>
int main()
{
   char str1[1000], str2[1000];
   printf("Enter the first string\n");
   gets(str1);
   printf("Enter the second string\n");
   gets(str2);
   if (strcmp(str1,str2) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
   return 0;
}