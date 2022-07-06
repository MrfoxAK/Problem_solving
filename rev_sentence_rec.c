#include <stdio.h>

void reverseSentence(){
     char c;
     scanf("%c",&c);
     if (c != '\n')
     {
          reverseSentence();
          printf("%c",c);
     }
}

int main()
{
     printf("Enter a sentence: ");
     reverseSentence();
     return 0;
}



// #include <stdio.h>
// #include <string.h>

// int revSentence(char arr[],int index){
//      if (index==-1)
//      {
//           return;
//      }
//      printf("%c",arr[index]);
//      revSentence(arr,index-1);
// }

// int main()
// {
//      char str[50];
//      printf("Enter your string : ");
//      gets(str);
//      int len = strlen(str);
//      revSentence(str,len);
//      return 0;
// }