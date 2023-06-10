#include <stdio.h>

int main()
{
    int N, number, col = 1;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {      
        for(int j = 1; j <= N + 2 - i; j++)
        {
            printf("  ");
        }
        number = 1;
        for(int j = 1; j <= col; j++)
        {
            printf("%d ", number);
            if(j <= col/2)
                number++;
            else
                number--;  
        }
        col += 2;
        printf("\n");
    }
    printf("\n");
}