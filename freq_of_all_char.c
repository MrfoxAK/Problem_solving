#include <stdio.h>
#include <string.h>
int main()
{
     char s[] = "akash Das";
     int len = strlen(s);
     int freq[26];
     for (int i = 0; i < 26; i++)
     {
          freq[i] = 0;
     }
     for (int i = 0; i < len; i++)
     {
          if (s[i] >= 'a' && s[i] <= 'z')
          {
               freq[s[i] - 97]++;
          }
          else if (s[i] >= 'A' && s[i] <= 'Z')
          {
               freq[s[i] - 65]++;
          }
     }
     printf("Frequency of all characters in the given string: \n");
     for (int i = 0; i < 26; i++)
     {
          if (freq[i] != 0)
          {
               printf("'%c' = %d\n", (i + 97), freq[i]);
          }
     }
     return 0;
}