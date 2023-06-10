#include <stdio.h>
float area, perimeter;

void Area(float a, float b)
{
    area =  a * b;
}
void Perimeter(float a, float b)
{
    perimeter =  2 * (a + b);
}

int main()
{   
    float base, height;
    printf("Enter the Base: ");
    scanf("%f", &base);
    printf("Enter the Height: ");
    scanf("%f", &height);
    Area(base, height); Perimeter(base, height);
    printf("The area is %0.2f and the perimeter is %0.2f",area, perimeter);
}