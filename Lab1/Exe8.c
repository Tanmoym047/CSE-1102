#include <stdio.h>

int main()
{
    int i, first_digit, last_digit, two_digit;
    printf("Enter a number of 7 digits: ");
    scanf("%d", &i);
    first_digit = i / 1000000;
    last_digit = i % 10;
    two_digit = i % 100;
    printf("%d %d %d\n", first_digit, last_digit, two_digit);
    printf("Sum =  %d\n", first_digit + last_digit);
    printf("Square =  %d\n", two_digit * two_digit);
}