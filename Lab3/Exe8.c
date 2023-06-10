#include <stdio.h>

int main()
{
    double N, X, temp, sum = 1;
    printf("Enter the numbers: ");
    scanf("%lf %lf", &X, &N);
    temp = N;
    if(N < 0)
        N = -N;
    while (N--)
    {
        sum *= X;
        
    }
    if (temp < 0)
    {
        sum = 1/sum;
    }
    printf("Output: %0.8lf\n", sum);
}