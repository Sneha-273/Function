#include<stdio.h>

int main()
{
    int comp_no(int ,int);
    int num1,num2,comp;
    printf("Enter the first number=");
    scanf("%d",&num1);
    printf("Enter the second number=");
    scanf("%d",&num2);
    comp=comp_no(num1,num2);
    printf("%d is greater",comp);
    }
    int comp_no(int n1,int n2 )
    {
    if(n1>n2)
    return n1;
    else 
    return n2;
    }
   
