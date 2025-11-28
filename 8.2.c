#include <stdio.h>

int main()
{
    int arrInt[] = {10, 20, 30};
    float arrFloat[] = {1.1f, 2.2f, 3.3f};
    char arrChar[] = {'A', 'B', 'C'};

    int *pInt = arrInt;
    float *pFloat = arrFloat;
    char *pChar = arrChar;

    printf("Initial addresses and values:\n");
    printf("pInt: %p, *pInt: %d\n", (void *)pInt, *pInt);
    printf("pFloat: %p, *pFloat: %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar: %p, *pChar: %c\n", (void *)pChar, *pChar);

    pInt++;
    pFloat++;
    pChar++;

    printf("\nAfter increment:\n");
    printf("pInt: %p, *pInt: %d\n", (void *)pInt, *pInt);
    printf("pFloat: %p, *pFloat: %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar: %p, *pChar: %c\n", (void *)pChar, *pChar);

    pInt--;
    pFloat--;
    pChar--;

    printf("\nAfter decrement (back to original):\n");
    printf("pInt: %p, *pInt: %d\n", (void *)pInt, *pInt);
    printf("pFloat: %p, *pFloat: %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar: %p, *pChar: %c\n", (void *)pChar, *pChar);

    return 0;
}