#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("given number isn't prime.\n");
            return 0;
        }
    }
    printf("Given number is a prime number.\n");
    return 0;
}
