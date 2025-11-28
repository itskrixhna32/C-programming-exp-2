
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("enter the first side:");
    scanf("%d", &side1);
    printf("enter the second side:");
    scanf("%d", &side2);
    printf("enter the third side:");
    scanf("%d", &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("The given sides form a valid triangle.\n");
    }
    if(side1*side1+side2*side2==side3*side3 || side2*side2+side3*side3 == side1*side1 || side3*side3+side1*side1 == side2*side2)
    {
        printf("the triangle is a right triangle\n");
    }
    if (side1 == side2 && side2 == side3)
    {
        printf("the triangle is an eqilateral triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("the triangle is an isosceles triangle\n");
    }
    else
    {
        printf("the triangle is a scalene triangle\n");
    }
    return 0;
}
