#include <stdio.h>
int max_number(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int max = max_number(a, b);
    printf("%d", max);
    return 0;
}

int max_number(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
