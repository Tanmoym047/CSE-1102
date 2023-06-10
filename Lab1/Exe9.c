#include <stdio.h>

int main()
{
    int i, sec, min, hour;
    printf("Enter Seconds: ");
    scanf("%d", &i);
    hour = i / 3600;
    min = (i % 3600) / 60;
    sec = i % 60;
    printf("H:M:S =  %d:%d:%d\n", hour, min, sec);
}