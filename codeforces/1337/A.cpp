#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int test, a, b, c, d;
    int x, y, z;

    scanf("%d", &test);
    for(int i = 0 ; i < test ; ++i)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        x = b;
        y = c;
        z = c;
        printf("%d %d %d\n", x, y, z);
    }
    return 0;
}