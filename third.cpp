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

struct Rect max_area(struct Rect first_fig, struct Rect second_fig);

int main()
{
    struct Rect first_fig = {10, 10, 15, 5};
    struct Rect second_fig = {1, 1, 100, -300};
    struct Rect max = max_area(first_fig, second_fig);
    printf("%d %d %d %d", max.lt.x, max.lt.y, max.rb.x, max.rb.y);
    return 0;
}

struct Rect max_area(struct Rect first_fig, struct Rect second_fig)
{
    if((first_fig.lt.y - first_fig.rb.y) * (first_fig.rb.x - first_fig.lt.x) > (second_fig.lt.y - second_fig.rb.y) * (second_fig.rb.x - second_fig.lt.x))
    {
        return first_fig;
    }
    return second_fig;
}

