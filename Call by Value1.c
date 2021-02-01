#include<stdio.h>
int calc(int x);
int main()
{
    int x;
    printf("enter value of x=");
    scanf("%d",&x);
    x=calc(x);
    printf("value of x is %d ",x);
    return 0;
}
int calc(int x)
{
    x=x+10;
    return x;
}
