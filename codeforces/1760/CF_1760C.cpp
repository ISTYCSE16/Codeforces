#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int part[n];
        int max = -1;
        int second_max = -2;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &part[i]);
            if (part[i] >= max)
            {
                second_max = max;
                max = part[i];
            }
            else
            {
                if (part[i] >= second_max)
                {
                    second_max = part[i];
                }
            }
        }
        for (int i = 0 ; i < n ; ++i)
        {
            if (part[i] == max)
            {
                printf("%d ", max - second_max);
            }
            else
            {
                printf("%d ", part[i] - max);
            }
        }
        printf("\n");
    }

    return 0;
}