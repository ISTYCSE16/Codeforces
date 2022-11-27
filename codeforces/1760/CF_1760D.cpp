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
        int val[n];
        int dip_counter = 0;
        bool high = false;
        bool low  = false;
        for (int i = 0 ; i < n ; ++i)
        {
            scanf("%d", &val[i]);
            if (i > 0)
            {
                if (!high && !low && val[i] < val[i - 1]) //going down
                {
                    dip_counter++;
                    low = true;
                }
                else if (!high && !low && val[i] > val[i - 1])
                {
                    dip_counter++;
                    high = true;
                }
                else if (high && !low && val[i] < val[i - 1])
                {
                    dip_counter++;
                }
                else if (!high && low && val[i] > val[i - 1])
                {
                    high = true;
                    low  = false;
                }
            }
        }
        if (dip_counter <= 1) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}