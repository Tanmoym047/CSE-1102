#include <stdio.h>
long long int fact1 = 1;


long long int  factorial(long long int a)
{
    fact1 = a;
    while(--a)
    {
        fact1 *= a;
    }
    return fact1;
}

int main()
{   
    long long int N, R;
    printf("Enter the N: ");
    scanf("%lld", &N);
    printf("Enter the R: ");
    scanf("%lld", &R);
    printf("The Permutation is %lld\n", factorial(N)/ factorial(N - R));
}