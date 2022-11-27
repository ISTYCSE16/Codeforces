#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    for (int i = 0 ; i < t; ++i)
    {
        cin >> s;
        bool yeah = true;
        int len = s.length();
        for (int j = 0 ; j < len; ++j)
        {
            if (len == 1)
            {
               if (s[j] == 's' || s[j] == 'e' || s[j] == 'Y')
               {
                    continue;
               }
               else
               {
                    yeah = false;
                    break;
               }
            }
            if (j == 0)
            {
                if ((s[j] == 's' && s[j + 1] == 'Y') || (s[j] == 'Y' && s[j + 1] == 'e') || (s[j] == 'e' && s[j + 1] == 's'))
                {
                    continue;
                }
                else
                {
                    yeah = false;
                    break;
                }
            }
            if (j < len - 1)
            {
                if ((s[j] == 's' && s[j + 1] == 'Y') || (s[j] == 'Y' && s[j + 1] == 'e') || (s[j] == 'e' && s[j + 1] == 's'))
                {
                    continue;
                }
                else
                {
                    yeah = false;
                    break;
                }
            }
            if (j == len - 1)
            {
                continue;
            }
        }
        if (yeah) printf("YES\n");
        else printf("NO\n");
    }
}