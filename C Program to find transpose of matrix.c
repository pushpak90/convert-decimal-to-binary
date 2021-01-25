#include<stdio.h>
int main()

{
    int r,c,a[50][50],tran[50][50];
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    printf("Matrix a elements\n");

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Matrix a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Transpose of matrix a\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tran[j][i]=a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d",tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
