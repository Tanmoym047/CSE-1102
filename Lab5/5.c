#include <stdio.h>

int main()
{
    int N, search, check = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d elements: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Element going to be searched: ");
    scanf("%d", &search);
    for(int i = 0; i< N ; i++)
    {
        if(array[i] == search)
        {
            printf("%d is found at position: %d", search, i+ 1);
            return 0;
        }   
    }
    if(check == 0)
    {
        printf("%d is not found.", search);
    }
}