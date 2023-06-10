#include <stdio.h>

int max(int a, int b)
{
    int maximum = (a > b) ? a : b;
    return maximum;
}

int main()
{   
    int age1, age2, age3, age4;;
    printf("Enter the ages: ");
    scanf("%d %d %d %d", &age1, &age2, &age3, &age4);
    int max1 = max(age1, age2);
    int max2 = max(age3, age4);
    printf("The Highest is %d\n", max(max1, max2));
}