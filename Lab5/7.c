#include <stdio.h>

int main()
{
    int N, count = 1, max = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i< N ; i++)
    {
        if(array[i] <= array[i+1])
        count++;
        else
        {
            if(count > max)
            {
                max = count;
                count = 1;
            }    
        }
    }
    printf("The longest is %d\n", max);
}