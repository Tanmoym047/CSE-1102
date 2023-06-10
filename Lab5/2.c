#include <stdio.h>

int main()
{
    int N; 
    float sum = 0;
    float average;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d class tests: ", N);
    for(int i = 0; i< N ; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    average = sum/N ;
    printf("The average is %0.2f", average);
    
}