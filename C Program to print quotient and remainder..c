// C Program to print quotient and remainder.
#include<stdio.h>

int main()

{
    int rem,q,num1,num2;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("\n");

    printf("Enter second number:");
    scanf("%d",&num2);

    if(num2==0)
    {
        printf("can't divide by zero.\n");
        return 0;
    }

    q=num1/num2;
    rem=num1%num2;

    printf("\n");

    printf("Quotient=%d \n Remainder=%d",q,rem);
    return 0;
}
