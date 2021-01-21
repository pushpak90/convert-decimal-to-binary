#include<stdio.h>

int main()
{
    int b,c;
    int a;

    printf("Enter a numbers:");
    scanf("%d",&b);
    printf("Which power of give number do you want to compute? ");
    scanf("%d",&a);

    c=1;

    for(int i=0;i<a;i++)
    {
     c=c*b;
    }
    printf("%d",c);
    return 0;
}
