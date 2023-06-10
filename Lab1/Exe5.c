#include <stdio.h>

int main()
{
    int i, day, month;
    printf("How many days?: ");
    scanf("%d", &i);
    month = i / 30;
    day = i % 30;
    printf("%d month(s) %d day(s)\n", month, day);

}