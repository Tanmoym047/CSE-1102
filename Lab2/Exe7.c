#include <stdio.h>

int main()
{
    int a, ans;
    scanf("%d", &a);
    for(int i = a; i <= a +3; i++)
    {
        ans = i +1;
        if(ans % 3 == 0)
        { 
            printf("%d", ans);
            break;
        }
    }
}