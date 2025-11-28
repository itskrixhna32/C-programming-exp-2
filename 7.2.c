#include <stdio.h>

typedef struct
{
    char name[50];
    float basic_pay;
    float gross_salary;
} Employee;

int main()
{
    int num_employees;
    Employee employees[100];
    int i;

    printf("Enter the number of employees (max 100): ");
    scanf("%d", &num_employees);

    if (num_employees > 100 || num_employees < 1)
    {
        printf("Invalid number of employees.\n");
        return 1;
    }

    for (i = 0; i < num_employees; i++)
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter basic pay of %s: ", employees[i].name);
        scanf("%f", &employees[i].basic_pay);

        float da = 0.52f * employees[i].basic_pay;
        employees[i].gross_salary = employees[i].basic_pay + da;
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < num_employees; i++)
    {
        printf("%-15s\t%.2f\n", employees[i].name, employees[i].gross_salary);
    }

    return 0;
}