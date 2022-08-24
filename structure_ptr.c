#include <stdio.h>

struct Student
{
     int roll;
     char name[50];
     float marks;
};

int main()
{
     struct Student s={2,"akash",60.9};
     struct Student * ptr=&s;
     printf("%d\n",s.roll);
     printf("%d\n",ptr->roll);
     printf("%d\n",(*ptr).roll);
     return 0;
}