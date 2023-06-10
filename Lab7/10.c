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
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        } 
    } 
    printf("The kth largest is: %d", a[(N - 1) - K + 1]);
} 
