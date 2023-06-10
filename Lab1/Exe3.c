#include <stdio.h>

int main()
{
    double C, F;
    printf("Celsius?: ");
    scanf("%lf", &C);
    F = ((9*C)/5) + 32;
    printf("Farenheit = %0.3lf degree farenheit\n", F);

}