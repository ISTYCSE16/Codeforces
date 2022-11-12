#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    long long int t;

    scanf("%lld", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%lf", &n);
        long long int ans = (int) ceil(n / 2.00);
        printf("%lld\n", ans);
    }
    return 0;
}