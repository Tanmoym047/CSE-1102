#include <stdio.h>

int main()
{
    int even = 0, odd = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = n;
    while (n != 0)
    {
        if (n % 10 == 0)
        {
            n /= 10;
            continue;
            
        }
        else if ((n % 10) % 2 == 0)
        {
            even++;
        }
        else if((n % 10) % 2 != 0)
        {
            odd++;
        }
        n /= 10;
    }
    if (even == odd)
    {
        printf("%d is a Shushomo Number", m);
    }
    else
    {
        printf("%d is not a Shushomo Number", m);
    }
}