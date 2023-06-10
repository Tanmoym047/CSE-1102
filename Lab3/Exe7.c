#include <stdio.h>

int main()
{
    long long int N, X, sum = 1;
    printf("Enter the numbers: ");
    scanf("%lld %lld", &X, &N);
    while(N--)
    {
        sum *= X;
    }
    printf("Output: %lld\n", sum);

}