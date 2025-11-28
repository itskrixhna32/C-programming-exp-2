#include <stdio.h>
#include <string.h>

union Address
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main()
{
    union Address addr;

    printf("Enter your name: ");
    scanf("%s", addr.name);

    printf("Enter your home address: ");
    scanf("%s", addr.home_address);

    printf("Enter your hostel address: ");
    scanf("%s", addr.hostel_address);

    printf("Enter your city: ");
    scanf("%s", addr.city);

    printf("Enter your state: ");
    scanf("%s", addr.state);

    printf("Enter your ZIP code: ");
    scanf("%s", addr.zip);

    printf("\nPresent Address:\n");
    printf("Name   : %s\n", addr.name);
    printf("Home   : %s\n", addr.home_address);
    printf("Hostel : %s\n", addr.hostel_address);
    printf("City   : %s\n", addr.city);
    printf("State  : %s\n", addr.state);
    printf("ZIP    : %s\n", addr.zip);

    return 0;
}