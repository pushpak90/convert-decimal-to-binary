#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    int min_num=INT_MAX;
    int num;
    int i;

    printf("how many do you want to enter ? ");
    scanf("%d",&n);

    printf("Enter %d numbers one by one: \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d=",i);
        scanf("%d",&num);

        if (num<min_num)
            min_num=num;

    }

    printf("\n");

    printf("Minmum number=%d\n",min_num);

    printf("\n");
    return 0;

}
