#include<stdio.h>
int main()
{
    int vect1[100],vect2[100];
    int result[100];
    int n,i;

    printf("Enter vector size:");
    scanf("%d",&n);

    printf("Enter elements of vector vect1: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&vect1[i]);
    }

    printf("Enter elements of vector vect2: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&vect2[i]);
    }

    for(i=0;i<n;i++)
        result[i]=vect1[i]+vect2[i];

    printf("Addition vector: \n");

    for(i=0;i<n;i++)
        printf("%d\n",result[i]);

    return 0;
}
