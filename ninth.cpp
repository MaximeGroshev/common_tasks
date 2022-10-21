#include <stdio.h>
#include <math.h>
#define epsilon 0.5

int is_equal(float a, float b);

int main()
{
    float a = 0;
    float b = 0;
    scanf("%f %f", &a, &b);
    int res = is_equal(a, b);
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

int is_equal(float a, float b)
{
    if(fabs(a - b) <= epsilon)
    {
        return 1;
    }
    return 0;
}
