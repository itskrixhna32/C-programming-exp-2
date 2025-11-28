
#include <stdio.h>

int a,b; //global variables

void add()
{
    printf("Sum = %d\n", a + b);
}

int main()
{
    a = 10;
    b = 15;
    add();
    return 0;
}
