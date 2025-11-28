#include <stdio.h>
int main()

{
    int m,n,p,q;
    printf("enter the dimensions of first matrix: \n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements of first matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the dimensions of second matrix: \n");
    scanf("%d%d",&p,&q);
    int b[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("matrix multiplication not possible\n");
        return 0;
    }
    int c[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix A (%dx%d)",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");

        printf("Matrix B (%dx%d)",p,q);
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d \t",b[i][j]);
            }
            printf("\n");
        }
        printf("product Matrix C (%dx%d)",m,q);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d \t",c[i][j]);
            }
            printf("\n");
        }
    }
        return 0;
            
}