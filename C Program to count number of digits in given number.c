#include<stdio.h>

int main()
{
    int num;
    int cnt;

    printf("Enter a number:");
    scanf("%d",&num);

    cnt=0;

    while(num)
    {
        cnt++;
        num = num/10;
    }

    printf("Number of digits : %d\n",cnt);
}
