#include <stdio.h>

int FACT_recursive(int n)
{
    if (n == 0)
        return 1;
    else
        return n * FACT_recursive(n - 1);
}

int FACT_iterative(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int num;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial of %d using recursion: %d\n", num, FACT_recursive(num));
    printf("Factorial of %d using iteration: %d\n", num, FACT_iterative(num));

    return 0;
}