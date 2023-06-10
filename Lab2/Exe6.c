#include <stdio.h>

int main()
{
    int a, b, c, d, count = 21, avg;
    
    printf("Enter 1st number: ");
    scanf("%d", &a);
    count = (a < count) ? a : count;

    printf("Enter 2nd number: ");
    scanf("%d", &b);
    count = (b < count) ? b : count;

    printf("Enter 3rd number: ");
    scanf("%d", &c);
    count = (c < count) ? c : count;

    printf("Enter 4th number: ");
    scanf("%d", &d);
    count = (d < count) ? d : count;

    avg = (a + b + c + d) - count;
    printf("The Average Value: ");
    printf("%d", avg / 3);
}