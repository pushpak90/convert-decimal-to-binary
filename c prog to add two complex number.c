#include<stdio.h>

struct complex
{
    int real,img;
}a,b,c;

int main()
{

    printf("Enter the complex number\n");
    printf("Enter real part of 1st complex number:");
    scanf("%d",&a.real);
    printf("Enter img part of 1st complex number without i :");
    scanf("%d",&a.img);

    printf("\n\n");

    printf("Enter real part of 2nd complex number:");
    scanf("%d",&b.real);
    printf("Enter img part of 2nd complex number without i :");
    scanf("%d",&b.img);

    printf("\n\n");

    c.real=a.real+b.real;
    c.img=a.img+b.img;

    printf("Sum of the complex numbers: (%d)+(%di)",c.real,c.img);
    return 0;

}
