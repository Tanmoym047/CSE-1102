#include <stdio.h>

int main()
{
    int N, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] % 2 != 0)
            count++;
    }
    printf("The odd number count is %d.", count);
}