#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    int rev_num;
    int digit;

    printf("Enter the number:");
    scanf("%d",&num);       //123456

    rev_num=0;

    while(num)
    {
        digit=num%10;

        rev_num=rev_num*10+digit;
        num=num/10;
    }
    printf("Reverse number:%d\n",rev_num);
    return 0;
}
