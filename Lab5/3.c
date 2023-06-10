#include <stdio.h>

int main()
{
    int N, max = -99999999;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] >= max)
            max = array[i];
    }
    printf("The max is %d.", max);
}