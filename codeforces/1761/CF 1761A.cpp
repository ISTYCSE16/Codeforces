#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; ++i)
    {
        scanf("%d %d %d", &n, &a, &b);
        if (n == 1)
        {
            printf("Yes\n");
            continue;
        }
        else
        {
            if ((n - (a + b)) >= 2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}