#include<stdio.h>
struct student
{
int rno;
char stname[10];
int age
};
union birthdate
{
char date[10];
int age
};
int main()
{
    struct student s1;
    printf("struct=%d", sizeof(s1));
    union birthdate s2;
    printf("\nunion=%d",sizeof(s2));

    return 0;
}