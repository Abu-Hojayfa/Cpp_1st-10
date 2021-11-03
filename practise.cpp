#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    int x, y;
    x = *a + *b;
    cout << x << endl;

    y = *a - *b;
    if (y < 0)
    {
        y = y * (-1);
    }

    cout << y << endl;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}