#include <stdio.h>
int is_beatten(int x1, int y1, int x2, int y2);

int main()
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int res = is_beatten(x1, y1, x2, y2);
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

int is_beatten(int x1, int y1, int x2, int y2)
{
    if(x1 == x2 || y1 == y2)
    {
        return 1;
    }
    else return 0;
}
