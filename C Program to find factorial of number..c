#include<stdio.h>
int main()
{
    int num;
    int fact;
    
    printf("entre the number: ");
    scanf("%d",&num);
    
    if (num<0)
    {
        printf("factorial of negative number doesn't exists.\n");
        return 0;
    }
    
    fact=1;
    
    while(num>1)
    {
        fact=fact*num;
        num--;
    }
    
    printf("factorial is %d \n",fact);
}