
#include <stdio.h>
int main()
{
    float temperature;
    printf("enter the temperature in celsius: ");
    scanf("%f",&temperature);

    float fahrenheit;
    fahrenheit = (9.0/5*temperature)+32;

    printf("the temperature in fahrenheit = %f\n",fahrenheit);

    return 0;
}
