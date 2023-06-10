#include <stdio.h>

int main()
{
    long long int N1, N2, sum = 0;
    printf("Enter the numbers: ");
    scanf("%lld %lld", &N1, &N2);
    if(N1 % 3 != 0)
    {
        N1 = ((N1 / 3) * 3) + 3;
    }
    for(long long int i = N1; i <= N2; i = i + 3)
    {
        sum += i;
    }
    printf("The sum is: %lld", sum);


}