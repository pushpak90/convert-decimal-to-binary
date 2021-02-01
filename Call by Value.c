#include<stdio.h>

void calc(int x);
int main()
{
    int x=10;
    calc(x);

    printf("\nValue of x in main is %d",x);
    return 0;
}

void calc(int x)
{
    printf("Value of x in calc function is %d",x);

}
