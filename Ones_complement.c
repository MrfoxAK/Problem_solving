#include <stdio.h>
#include<string.h>
int main()
{
     char binchararr[50];
     printf("Enter a Binary num: ");
     gets(binchararr);

     int len = strlen(binchararr);
     // printf("%d",len);
     for (int i = 0; i < len; i++)
     {
          if (binchararr[i] == '0')
          {
               binchararr[i] = '1';
          }
          else if (binchararr[i] == '1')
          {
               binchararr[i] = '0';
          }
          else
          {
               printf("Invlaid input\n");
          }
     }
     binchararr[len] = '\0';
     puts(binchararr);
     return 0;
}