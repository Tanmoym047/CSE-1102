#include <stdio.h>

void swapnum(int *, int *);

int main()
{
    int N;
    int array[N];
    scanf("%d", &N);
    swapnum(&a, &b);
    printf("%d %d", a, b);
}

void swapnum(int *p1 , int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}