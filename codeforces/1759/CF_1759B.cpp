#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, s;
    scanf("%d", &t);
    for (int i = 0 ; i < t ; ++i)
    {
        scanf("%d %d", &m, &s);
        int perm[m + 1];
        int max = -1;
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &perm[j]);
            if (perm[j] > max) max = perm[j];
        }
        int total_current = (max*(max + 1) / 2);
        int missing;
        for (int j = 0 ; j < m ; ++j)
        {
            total_current = total_current - perm[j];
        }
        missing = total_current;
        if (missing > s) 
        {
            printf("NO\n");
            continue;
        }
        else if (missing <= s)
        {
            int still_left = s;
            still_left -= missing;
            if (still_left == 0)
            {
                printf("YES\n");
                continue;
            }
            else
            {
                bool yeah = true;
                while(1)
                {
                    max++;
                    still_left -= max;
                    if (still_left == 0)
                    {
                        yeah = true;
                        break;
                    }
                    else if (still_left < 0)
                    {
                        yeah = false;
                        // printf("Yeah Problem is, I'm coming here!");
                        break;
                    }
                }
                if (yeah) printf("YES\n");
                else
                {
                    printf("NO\n");
                } 
                
            }
        }
    }

    return 0;
}