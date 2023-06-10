#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i = i + 3)
    {
        printf("%d -> ", i);
    }
    printf(".\n");

}