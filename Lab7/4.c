#include <stdio.h>
long long int fact1 = 1;
long long int fact2 = 1;
long long int fact3 = 1;

void factorial1(long long int a)
{
    fact1 = a;
    while(--a)
    {
        fact1 *= a;
    }
}
void factorial2(long long int a)
{
    fact2 = a;
    while(--a)
    {
        fact2 *= a;
    }
}
void factorial3(long long int a)
{
    fact3 = a;
    while(--a)
    {
        fact3 *= a;
    }
}

int main()
{   
    long long int N, R;
    printf("Enter the N: ");
    scanf("%lld", &N);
    printf("Enter the R: ");
    scanf("%lld", &R);
    factorial1(N); factorial2(N - R); factorial3(R);
    printf("The Permutation is %lld\n", fact1 / fact2);
    printf("The Combination is %lld\n", fact1/ (fact2 * fact3));
}