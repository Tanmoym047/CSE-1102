#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);
    printf("The maximum number: ");
    if(a > b && a > c && a > d)
    {
        printf("%d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d\n", c);
    }
    else
    {
        printf("%d\n", d);
    }

}