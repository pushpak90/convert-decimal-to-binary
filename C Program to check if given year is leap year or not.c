#include<stdio.h>

int main()
{
    int year;
    int leapyear=0;

    printf("Enter the year:");
    scanf("%d",&year);

    if(year%400==0)
    {
        leapyear=1;
    }
    else if (year%100==0)
    {
        leapyear=0;
    }
    else if (year%4==0)
    {
        leapyear=1;
    }

    if(leapyear)
    {
        printf("This is a leap year.\n");
    }
    else
    {
        printf("This isn't leap year.\n");
    }
    return 0;
}
