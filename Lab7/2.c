#include <stdio.h>

int diff(int a, int b)
{
    int result = a - b;
    if(result < 0)
        result = -1 * result;
    return result;
}

int main()
{   
    int x, y;
    printf("Enter the X: ");
    scanf("%d", &x);
    printf("Enter the Y: ");
    scanf("%d", &y);
    printf("The difference is %d", diff(x, y));
}