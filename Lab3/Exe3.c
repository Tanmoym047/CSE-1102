#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i *= 2)
    {
        printf("%d -> ", i);
    }
    printf(".\n");

}