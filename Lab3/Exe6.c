#include <stdio.h>

int main()
{
    int N, count = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    int a = N + 1;
    for( ; N >=1; N --)
    {
        if (N == 0)
            break;
        printf("%d * %d ", a, N);
        if(N > 1)
        {
            printf("+ ");
        }
        count += a * N;
        a--;
    }
    printf("= %d\n", count);

}