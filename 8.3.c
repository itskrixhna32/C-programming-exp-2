#include <stdio.h>

void modifyValues(int *a, float *b, char *c)
{
    *a = *a + 10;
    *b = *b * 2.0f;
    *c = 'Z';
}

int main()
{
    int x = 5;
    float y = 3.5f;
    char z = 'A';

    printf("Before modification: x = %d, y = %.1f, z = %c\n", x, y, z);

    modifyValues(&x, &y, &z);

    printf("After modification:  x = %d, y = %.1f, z = %c\n", x, y, z);

    return 0;
}