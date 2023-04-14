#include<stdio.h>

int main(void)
{
    int age = 18;
    const int days_per_year = 365;
    int days;

    days = age * days_per_year;

    printf("Age: %d\n", age);
    printf("Days: %d\n", days);

    return 0;
}