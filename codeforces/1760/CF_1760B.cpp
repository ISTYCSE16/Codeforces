#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string s;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; ++i)
    {
        scanf("%d", &n);
        cin >> s;
        int max = -1;
        for (int j = 0 ; j < n ; ++j)
        {
            int val = s[j] - 'a' + 1;
            if (val > max)
            {
                max = val;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}