#include <stdio.h>
float X = 0;
void func(int a[], int M)
{
    if(M % 2 == 1)
        X =  a[M/2];
    else
    {
        X = (float)(a[M/2] + (a[M/2] - 1)) / 2;
    }
}
int main()
{   
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter the elemets: ");
    for(int i = 0; i < N; i++)
        scanf("%d", &array[i]);
    func(array, N);
    printf("The median is %f", X);
}
