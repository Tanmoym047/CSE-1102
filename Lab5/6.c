#include <stdio.h>

int main()
{
    int N1 , N2;
    printf("Enter the number of elements: ");
    scanf("%d", &N1);
    printf("Enter another number of elements: ");
    scanf("%d", &N2);
    int array1[N1], array2[N2], array3[N1+N2];
    printf("Enter %d elements: ", N1);
    for(int i = 0; i< N1 ; i++)
    {
        scanf("%d", &array1[i]);
        array3[i] = array1[i];
    }
    int count = N1;
    printf("Enter %d elements: ", N2);
    for(int i = 0; i< N2 ; i++)
    {        
        scanf("%d", &array2[i]);
        array3[count] = array2[i];
        count++;
        
    }
    for(int i = 0; i< N1 + N2 - 1 ; i++)
    {
        for(int j = i + 1; j < N1 + N2 ; j++)
        {
            if(array3[i] > array3[j])
            {
                int temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }
    for(int i = 0; i< N1+ N2 ; i++)
    {        
        printf("%d, ", array3[i]);  
    }
}