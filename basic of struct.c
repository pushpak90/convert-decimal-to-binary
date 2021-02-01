#include<stdio.h>
#include<string.h>

struct student
{
    char name[25];
    int age;
    char branch[25];
    char rollno;
}s1;

int main()
{
    struct student s1;
    printf("name:");
    scanf("%s",&s1.name);
    printf("age:");
    scanf("%d",&s1.age);
    printf("branch:");
    scanf("%s",&s1.branch);
    printf("rollno:");
    scanf("%d",&s1.rollno);

    printf("name:%s\n",s1.name);
    printf("age:%d\n",s1.age);
    printf("branch:%s\n",s1.branch);
    printf("rollno:%d\n",s1.rollno);
}
