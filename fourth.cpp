#include <stdio.h>
struct Point
{
    int x;
    int y;
};

struct Rect
{
    struct Point lt;
    struct Point rb;
};

void normalized(struct Rect* first_fig);
int max_number(int a, int b);

int main()
{
    struct Rect first_fig = {18, 4, 15, 11};
    normalized(&first_fig);
    printf("%d %d %d %d", first_fig.lt.x, first_fig.lt.y, first_fig.rb.x, first_fig.rb.y);
    return 0;
}

void normalized(struct Rect* first_fig)
{
    if((*first_fig).lt.y < (*first_fig).rb.y)
    {
        int tmp = (*first_fig).lt.y;
        (*first_fig).lt.y = max_number((*first_fig).lt.y, (*first_fig).rb.y);
        (*first_fig).rb.y = tmp;
    }

    if((*first_fig).lt.x > (*first_fig).rb.x)
    {
        int tmp =  (*first_fig).rb.x;
        (*first_fig).rb.x = max_number((*first_fig).lt.x, (*first_fig).rb.x);
        (*first_fig).lt.x = tmp;
    }
}

int max_number(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
