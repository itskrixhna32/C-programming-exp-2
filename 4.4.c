
#include <stdio.h>

void func();

void main()
{
    func();
    func();
    func();
}
void func()
{
    int a=10;
    static int b=10;
    printf("a = %d,b = %d\n",a,b);
    a++;
    b++;
}
