#include <stdio.h>
int fibo(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    printf("fibbonacci sequence upto %d terms: \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
    printf("\n");

    return 0;
}