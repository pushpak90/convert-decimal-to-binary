#include<stdio.h>

struct student
{
    char name[50];
    int id;
    char branch[20];
    int age;
    char place[50];
}std;

int main()
{
    printf("Enter Student Information\n");
    printf("-------------------------\n");
    printf("Enter name:");
    scanf("%s",std.name);

    printf("Enter id:");
    scanf("%d",&std.id);

    printf("Enter branch name :");
    scanf("%s",std.branch);

    printf("Enter age:");
    scanf("%d",&std.age);

    printf("Enter location:");
    scanf("%s",std.place);

    printf("Displaying Student Information\n");
    printf("--------------------------------\n");

    printf("name:%s\n",std.name);
    printf("id:%d\n",std.id);
    printf("branch:%s\n",std.branch);
    printf("age:%d\n",std.age);
    printf("place:%s\n",std.place);

    return 0;
}
