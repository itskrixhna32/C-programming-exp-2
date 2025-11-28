
#include <stdio.h>
int main()
{
    char name[7];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("enter your age: ");
    scanf("%d",&age);

    printf("your name is %s and your age is %d\n",name,age);

    return 0;
}
