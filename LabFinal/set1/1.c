#include <stdio.h>

int main()
{
    int count = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        n/= 10;
        count++;
    }
    printf("NUmber of Digits: %d", count);




}