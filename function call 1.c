#include<stdio.h>

int main()
{
    int sumnum(int,int);
    int no1,no2,sum;
    printf("Enter the first number=");
    scanf("%d",&no1);
    printf("Enter the second number=");
    scanf("%d",&no2);
    sum=sumnum(no1,no2);
    printf("sum=%d",sum);  
}
    int sumnum(int n1,int n2)
    {
    int add;
    add=n1+n2;
    return add;
    }