#include <stdio.h>

int main()
{
    int N1, N2, sum;
    printf("Enter the numbers: ");
    scanf("%d %d", &N1, &N2);
    for(int i = N1; i <= N2; i++)
    {
        sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i&& i != 0)
        {
            printf("%d ", i);
        }
    }
}
