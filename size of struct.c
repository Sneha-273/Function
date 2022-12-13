#include<stdio.h>
struct student
{
int rno;
char stname[10];
int age
};
int main()
{
    struct student s1;
    printf("%d", sizeof (s1));
    return 0;
}