#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 1)
        {
            for (int i = 0 ; i < n - 1; ++i)
            {
                printf("7 ");
            }
            printf("7\n");
            continue;
        }
        else
        {
            int half_n = n / 2;
            if (half_n % 2 == 1)
            {
                for (int i = 0 ; i < half_n - 1 ; ++i)
                {
                    printf("1 3 ");
                }
                printf("1 3\n");
                continue;
            }
            else
            {
                for (int i = 0 ; i < half_n - 1 ; ++i)
                {
                    printf("1 3 ");
                }
                printf("2 2\n");
                continue;
            }
        }
    }

    return 0;
}