#include<stdio.h>
void calc(int *p);

int main()
{
    int x=10;
    calc(&x);
    printf("value of x is %d",x);
    return 0;
}
void calc(int *p)
{
    *p=*p+10;
}
