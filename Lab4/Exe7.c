#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = 1; i < N; i++)
    {
        if(N % i == 0)
        {
            sum += i;
        }
    }
    if(sum == N)
        printf("It's Perfect Number");
    else
        printf("Not perfect");
}