#include<stdio.h>
int area_of_rec(int length,int base)
{
int area;
area=length*base;
return area;
}
int main()
{
    int l,b;
    printf("enter length=");
    scanf("%d",&l);
    printf("enter base=");
    scanf("%d",&b);
    int area=area_of_rec(l,b);
    printf("area of rectangle=%d\n",area);
    return 0;
}