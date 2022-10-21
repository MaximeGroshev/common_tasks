#include <stdio.h>
int fabs(int a);

int main()
{
    int a = 0;
    scanf("%d", &a);
    a = fabs(a);
    printf("%d", a);
    return 0;
}

int fabs(int a)
{
    if(a > 0)
    {
        return a;
    }
    return -a;
}
