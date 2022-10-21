#include <stdio.h>

int is_leap(int a);

int main()
{
    int a = 0;
    scanf("%d", &a);
    int res = is_leap(a);
    if(res == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int is_leap(int a)
{
    if((a % 4 == 0) && (a % 100 != 0))
    {
        return 1;
    }
    else if((a % 400) == 0)
    {
        return 1;
    }
    return 0;
}
