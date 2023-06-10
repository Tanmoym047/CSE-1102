#include <stdio.h>

int main()
{
    long long int N, square, cube;
    printf("Enter the number: ");
    scanf("%lld", &N);
    square = (N * (N+1) * (2*N + 1)) / 6;
    cube = ((N * (N + 1)) / 2) * ((N * (N + 1)) / 2);

    printf("Square: %lld\n", square);
    printf("Cube: %lld", cube);

}