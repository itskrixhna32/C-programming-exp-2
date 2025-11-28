#include <stdio.h>
int gcd(int num1,int num2)
{
    if(num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2,num1%num2);
    }
}
int main()
{
    int a,b,result;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);

    result = gcd(a,b);
    printf("gcd of %d and %d = %d",a,b,result);

    return 0;
}