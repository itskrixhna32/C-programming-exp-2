#include <stdio.h>

int main()
{
    int x = 25;
    float y = 5.75;
    char z = 'A';

    int *ptrX = &x;
    float *ptrY = &y;
    char *ptrZ = &z;

    printf("x = %d, Address of x (ptrX) = %p, Value at ptrX = %d\n", x, (void *)ptrX, *ptrX);
    printf("y = %.2f, Address of y (ptrY) = %p, Value at ptrY = %.2f\n", y, (void *)ptrY, *ptrY);
    printf("z = %c, Address of z (ptrZ) = %p, Value at ptrZ = %c\n", z, (void *)ptrZ, *ptrZ);

    return 0;
}