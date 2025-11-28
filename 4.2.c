
#include<stdio.h>

 int factorial(int n);

int main()
{
    int num, answer;
    printf("enter a number: ");
    scanf("%d", &num);

    answer = factorial(num);

    printf("factorial is : %d ",answer);
    
    return 0;
}

    int factorial(int n)
{
    int fact=1;

    for(int i=1; i<=n; i++)
    fact = fact*i;

    return fact;  
}
