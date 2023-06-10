#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 5 == 0)
    {
        printf("Yes");
    }
    else
        printf("No");
}