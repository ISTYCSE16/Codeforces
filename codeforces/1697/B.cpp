#include <bits/stdc++.h>
#define LLU unsigned long long int

using namespace std;

int main()
{
    LLU n, q, x, y;

    scanf("%llu %llu", &n, &q);

    LLU p[n];

    for (LLU i = 0; i < n; ++i)
    {
        scanf("%llu", &p[i]);
    }

    LLU bought[n];
    sort(p, p + n, greater<int>());

    LLU cumsum[n];

    cumsum[0] = p[0];

    for (LLU i = 1; i < n; ++i)
    {
        cumsum[i] = p[i] + cumsum[i - 1];
        //printf("%dth = %d", i, cumsum[i]);
    }

    for (LLU i = 0 ; i < q ; ++i)
    {
        scanf("%llu %llu", &x, &y);
        LLU left_ind = x - y;
        LLU cheap;
        if (left_ind == 0)
        {
            cheap = cumsum[x - 1];
        }
        else
        {
            cheap = cumsum[x - 1] - cumsum[left_ind - 1];
        }
        
        printf("%llu\n", cheap);
    }

    return 0;
}