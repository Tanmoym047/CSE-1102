#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = 1; i <= N - 1; i++)
    {
        printf("$-");
    }
    printf("$.\n");

}