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
     int i=0;
     for (i = 0; i < len; i++)
     {
          if (s[i]==c)
          break;
     }
     for (i; i < len; i++)
     {
          s[i] = s[i+1];
     }
     
     puts(s);
     return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//      int count[50], max = 0;
//      char s[50];
//      printf("Enter a string : ");
//      gets(s);
//      int len = strlen(s);
//      for (int i = 0; i < len; i++)
//      {
//           for (int j = i + 1; j < len; j++)
//           {
//                if (s[i] == s[j])
//                {
//                     s[i] = s[i+1];
//                }
//           }
//      }
//      puts(s);
     
//      return 0;
// }