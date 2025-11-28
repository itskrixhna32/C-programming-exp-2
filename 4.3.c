
#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}

int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Division by zero error!\n");
        return 0;
    }
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    {
        int multiplyResult = multiply(num1, num2);
        int divisionResult = divide(num1, num2);

        printf("\nMultiplication: %d", multiplyResult);
        printf("\nDivision: %d ", divisionResult);
    }
    
    {
        int multiplyResult = multiply(8,5);
        int divisionResult = divide(24,6);

        printf("\n\nMultiplication: %d", multiplyResult);
        printf("\nDivision: %d", divisionResult);
    }

    {
        int multiplyResult = multiply(num1, 5);
        int divisionResult = divide(20, num2);

        printf("\n\nMultiplication: %d", multiplyResult);
        printf("\nDivision: %d ", divisionResult);
    }

    return 0;
}
