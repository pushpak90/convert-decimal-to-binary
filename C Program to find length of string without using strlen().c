#include<stdio.h>
int main()
{
    char str[1000];
    int i;

    printf("Enter a string:\n");
    fgets(str,1000,stdin);

    for(i=0;str[i]!='\0';i++);

    printf("Length of string:%d",i);
    return 0;
}
