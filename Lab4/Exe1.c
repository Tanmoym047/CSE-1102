#include <stdio.h>

int main()
{
    long long int N, fact = 1;
    printf("Enter the number: ");
    scanf("%lld", &N);
    for(long long int i = N; i >= 2; i--)
    {
        fact *= i;
    }
    printf("The factorial of %lld is: %lld", N, fact);


}