
#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("enter the length of the rectangle: ");
    scanf("%d",&b);

    area=l*b;
    printf("Area of rectangle = %d\n",area);

    perimeter = 2*(l + b);
    printf("perimeter of the rectangle = %d\n",perimeter);

    return 0;
}
