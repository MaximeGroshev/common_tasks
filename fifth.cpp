#include <stdio.h>

int does_belong(int a);

int main()
{
    int a = 0;
    scanf("%d", &a);
    int belong = does_belong(a);
    if(belong == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int does_belong(int a)
{
    if(a >= 25 && a < 37)
    {
        return 1;
    }
    return 0;
}
