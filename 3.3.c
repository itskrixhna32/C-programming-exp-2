
#include <stdio.h>
#include <stdlib.h>

int Collinear(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int determinant = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (determinant == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    if (Collinear(x1, y1, x2, y2, x3, y3))
    {
        printf("The points (%d,%d), (%d,%d), and (%d,%d) are collinear.\n", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("The points (%d,%d), (%d,%d), and (%d,%d) are not collinear.\n", x1, y1, x2, y2, x3, y3);
    }

    return 0;
}
