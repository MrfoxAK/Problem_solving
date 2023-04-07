#include <stdio.h>
#include <string.h>
int main()
{
     char s[] = "akash Das";
     int len = strlen(s);
     int freq[len];
     for (int i = 0; i < len; i++)
     {
          freq[i] = 1;
     }
     for (int i = 0; i < len; i++)
     {
          for (int j = i+1; j < len; j++)
          {
               if (s[i]==s[j])
               {
                    freq[i]++;
                    freq[j]++;
               }
          }
     }
     for (int i = 0; i < len; i++)
     {
          printf("%d ",freq[i]);
     }
     return 0;
}