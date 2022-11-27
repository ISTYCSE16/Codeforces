#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int arr[n + 20];
        if (x == 1 && n == 1)
        {
            printf("1\n");
            continue;
        }
        if (n % x == 0 && x > 1)
        {
            for (int i = 1 ; i <= n; ++i)
            {
                if (i == 1) arr[i] = x;
                else if (i == n) arr[i] = 1;
                else
                {
                    if (i == x)
                    {
                        arr[i] = i*2;
                    }
                    else
                    {
                        arr[i] = i;
                    }
                }
            }

            for (int i = 1 ; i < n ; ++i)
            {
                printf("%d ", arr[i]);
            }
            printf("%d\n", arr[n]);
        }
        else
        {
            printf("-1\n");
        }
    }
}