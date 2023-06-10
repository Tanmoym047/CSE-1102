#include <stdio.h>

float square(float a, float b)
{
    float result = 1;
    float check = b;
    if(b < 0)
    {
        b = -b;
    }
    while(b--)
    {
        result *= a;
    }
    if(check < 0)
    {
        result = 1/result;
    }
    return result;
}

int main()
{   
    float X, Y;
    printf("Enter the X: ");
    scanf("%f", &X);
    printf("Enter the Y: ");
    scanf("%f", &Y);
    printf("The answer is %f",square(X, Y));
}