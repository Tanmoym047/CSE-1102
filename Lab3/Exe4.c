#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    for(int i = (N/3) * 3; i >= 1; i = i - 3)
    {
        printf("%d -> ", i);
        
    }
    printf(".\n");

}