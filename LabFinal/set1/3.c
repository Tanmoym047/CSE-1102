#include <stdio.h>

int main()
{
    int n, check = 0, pos = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter %d integer numbers: ", n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int even = 0, odd = 0;
        int m = array[i];
        while (array[i] != 0)
        {
            if (array[i] % 10 == 0)
            {
                array[i] /= 10;
                continue;
            }
            else if ((array[i] % 10) % 2 == 0)
            {
                even++;
            }
            else if ((array[i] % 10) % 2 != 0)
            {
                odd++;
            }
            array[i] /= 10;
        }
        if (even == odd)
        {
            if (m > check)
            {
                check = m;
                pos = i;
            }
        }
    }
    printf("THe highest Shushomo number = %d\n", check);
    printf("THe position of the number = %d", pos + 1);
}