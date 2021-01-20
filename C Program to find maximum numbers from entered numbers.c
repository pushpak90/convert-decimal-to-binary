#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    int max_num=INT_MIN;
    int num;
    int i;

    printf("How many number do you want to enter?");
    scanf("%d",&n);

    printf("Enter %d number one by one\n");
    for(i=1;i<=n;i++)
    {
        printf("%d=",i);
        scanf("%d",&num);

        if(num>max_num)
            max_num=num;
    }
    printf("Maximum number =%d\n",max_num);
    return 0;
}
