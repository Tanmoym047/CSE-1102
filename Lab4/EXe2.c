#include <stdio.h>

int main()
{
    int N, min = 2147483647, count;
    printf("How many numbers: ");
    scanf("%d", &N);
    printf("Enter the numbers:");
    while(N--)
    {
        scanf("%d", &count);
        if(count < min)
        {
            min = count;
        }
    }
    printf("The minimum is: %d", min);
}