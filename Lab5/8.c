#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i< N-1 ; i++)
    {
        for(int j = i + 1; j < N ; j++)
        {
            int sum = array[i] + array[j], check = 0;
            for(int k = 2; k <= sum/2; k++)
            {
                if(sum%k == 0)
                {
                   check = 1;
                   break;     
                }
            }
            if(check == 0)
            {
                printf("Sum of %d and %d is prime\n", array[i], array[j]);
            }
            check = 0;
        }
    }
}