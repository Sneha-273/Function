#include<stdio.h>

int main()
{
    void sum(int,int);
    int no1,no2;
    printf("enter first number=");
    scanf("%d",&no1);
    printf("enter second number=");
    scanf("%d",&no2);
    sum(no1,no2);
    return 0;
}
void sum(int no1,int no2)
{
int lsum = no1+no2;
printf("\nsum=%d",lsum);
}