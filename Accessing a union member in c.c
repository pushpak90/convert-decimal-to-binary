#include<stdio.h>
union item
{
    int a;
    float b;
    char c;
};
int main()
{
    union item it;
    it.a=12;
    it.b=20.2;
    it.c='z';

    printf("%d\n",it.a);
    printf("%f\n",it.b);
    printf("%c\n",it.c);
    return 0;
}


