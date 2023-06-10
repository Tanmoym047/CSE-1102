#include <stdio.h>

int main()
{
    double dollar, taka;
    printf("How Much Dollar?: ");
    scanf("%lf", &dollar);
    taka = dollar * 103;
    printf("%0.2lf dollar = %0.2lf taka\n", dollar, taka);

}