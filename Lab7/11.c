#include <stdio.h>

void func(int a[], int N, int K);

int main()
{   
    int N;
    scanf("%d", &N);
    int array[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    int K;
    scanf("%d", &K);
    func(array, N, K);
}
void func(int a[], int N, int K)
{
    int b[N];
    int j = 0;
    for(int i = N - K; i < N; i++)
    {
        b[j] = a[i];
        j++; 
    }
    for(int i = 0; i < N - K; i++)
    {
        b[j] = a[i];
        j++;
    } 
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", b[i]);
    } 
} 
