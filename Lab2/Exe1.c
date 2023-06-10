#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("The minimum number: ");
    printf("%d\n", (a < b) ? a : b);
}