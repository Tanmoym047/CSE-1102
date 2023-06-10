#include <stdio.h>

int main()
{
    int N, number;
    printf("Enter the number: ");
    scanf("%d", &N);
    number = 0;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
            if(number == 10)
            {
                number = 0;
            }
        }
        printf("\n");
    } 
}