#include <bits/stdc++.h>
#define LLI long long int


using namespace std;



int main()
{
    LLI t, n, m;
    scanf("%lld", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%lld %lld", &n, &m);
        LLI ans;
        if (n == 1 && m == 1)
        {
            ans = 0;
        }
        else if (n == 1 && m > 2)
        {
            ans = -1;
        }
        else if (m == 1 && n > 2)
        {
            ans = -1;
        }
        else if (n > m)
        {
            ans = (2 * (m - 1) + 1 + (2 * ((n - m) - 1) + 1 - ((n - m) % 2)));
        }
        else if (n < m)
        {
            ans = (2 * (n - 1) + (2 * ((m - n) - 1) + 2 - ((m - n) % 2)));
        }
        else if (n == m)
        {
            ans = 2 * (n - 1);
        }
        

        printf("%lld\n", ans);
    }

    return 0;
}