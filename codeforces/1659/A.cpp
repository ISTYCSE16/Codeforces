#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    int t;
    int n;
    int r;
    int b;

    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {   
        scanf("%d %d %d", &n, &r, &b);
        
        int times = r / (b + 1);
        int rem = r % (b + 1);

        int rblocks[220];
        for (int j = 0; j <= b; ++j)
        {
            rblocks[j] = times;
        }
        for (int j = 0; j < rem; ++j)
        {
            rblocks[j]++;
        }
        /*printf("RBLOCKS\n");
        for (int j = 0; j <= b; ++j)
        {
            printf("%d ", rblocks[j]);
        }
        printf("\n");*/

        char s[220];
        int bcheck = 0;
        int start = 0;
        int end = 0;
        for (int j = 0; j <= b; ++j)
        {
            start = end;
            end = end + rblocks[j];
            for (int k = start; k < end; ++k)
            {
                s[k] = 'R';
            }
            if (bcheck != b)
            {
                s[end] = 'B';
                bcheck = bcheck + 1;
            }
            end = end + 1;
        }
        for (int j = 0; j < n; ++j)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
    
}