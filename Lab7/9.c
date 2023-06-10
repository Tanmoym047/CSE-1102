#include <stdio.h>

void func(int a[], int b[], int c[])
{
    for(int i = 0; i < 3; i++)
    {
        c[i] = a[i];
    }
    for(int i = 3; i < 6; i++)
    {
        c[i] = b[i - 3];
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }

        } 
    } 
    for(int i = 0; i < 6; i++)
    {
        printf("%d\t", c[i]);
    } 
} 

int main()
{   
    int array1[3] = {1, 6, 5};
    int array2[3] = {1, 2, 8};
    int array3[6] = {0};
    func(array1, array2, array3);
    
    
}
