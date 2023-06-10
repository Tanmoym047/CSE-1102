#include <stdio.h>

int main()
{
    int a, b;
    char x;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Operation to be performed (+, - ,* , /:): ");

    scanf(" %c", &x);
    switch(x)
    {
        case '+': 
        {
            printf("%d", a + b); 
            break;
        }
        case '-': 
        {
            printf("%d", a - b); 
            break;
        }
        case '*':
        {
            printf("%d", a * b); 
            break;
        }
        case '/':
        {
            printf("%d", a / b); 
            break;
        }
    }
}