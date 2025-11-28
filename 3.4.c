
#include <stdio.h>

int main()
{
    int num, positives = 0, negatives = 0, zeros = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positives++;
        else if (num < 0)
            negatives++;
        else
            zeros++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers: %d", positives);
    printf("\nCount of negative numbers: %d", negatives);
    printf("\nCount of zeros: %d\n", zeros);

    return 0;
}
