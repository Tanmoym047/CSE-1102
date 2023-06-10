#include <stdio.h>

int square(int a, int b)
{
    int result = 1;
    while(b--)
    {
        result *= a;
    }
    return result;
}

int main()
{   
    int X, Y;
    printf("Enter the X: ");
    scanf("%d", &X);
    printf("Enter the Y: ");
    scanf("%d", &Y);

    printf("The answer is %d",square(X, Y));
}