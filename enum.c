// // An example program to demonstrate working
// // of enum in C
// #include <stdio.h>
// enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
//           Aug, Sep, Oct, Nov, Dec};
// int main()
// {
//      for (int i = Jan; i <= Dec; i++)
//      {
//           printf("%d ",i);
//      }

//      return 0;
// }

// #include <stdio.h>
// enum State {Working = 1, Failed = 0, Freezed = 0};

// int main()
// {
//    printf("%d, %d, %d", Working, Failed, Freezed);
//    return 0;
// }

#include <stdio.h>
enum day
{
     sunday = 1,
     monday,
     tuesday = 5,
     wednesday,
     thursday = 10,
     friday,
     saturday
};

int main()
{
     printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
            // friday = 5.55, only int allowed
     return 0;
}