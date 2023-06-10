#include <stdio.h>

int main()
{
    double base, height, area;
    printf("Base?: ");
    scanf("%lf", &base);
    printf("Height?: ");
    scanf("%lf", &height);
    area = 0.5 * base * height;
    printf("Area = %0.4lf sq unit\n", area);

}