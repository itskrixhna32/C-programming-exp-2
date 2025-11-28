#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter any number: ");
    scanf("%d",&n);
    for(int a=1;a*a*a<n;a++)
    {
        for(int b=a;b*b*b<n;b++)
        {
            if(a*a*a+b*b*b == n)
            {
                count++;
                printf("%d = %d^3 + %d^3\n",n,a,b);
            }
        }
    }
    if(count>=2)
    {
        printf("%d is a ramanujan number",n);
    }
    else
    {
        printf("%d is not a ramanujan number",n);
    }
    return 0;
    
}