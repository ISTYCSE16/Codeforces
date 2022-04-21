#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t, n;
    
    scanf("%d", &t);
    for (int i = 0 ; i < t; ++i)
    {
        scanf("%d", &n);
        int vals[n + 10];
        int nums[n + 10];

        for (int j = 0; j <= n; ++j)
        {
            vals[j] = 0;
        }

        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &nums[j]);
            vals[nums[j]] = vals[nums[j]] + 1; 
        }

        int max = -1;
        int numof;
        for (int j = 0; j < n; ++j)
        {
            if (max < vals[nums[j]])
            {
                max = vals[nums[j]];
                numof = nums[j];
            }
        }

        if (max >= 3)
        {
            printf("%d\n", numof);
        }
        else
        {
            printf("-1\n");
        }
        
    }

    return 0;
}