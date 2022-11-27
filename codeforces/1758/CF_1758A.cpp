#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        cin >> s;
        int len1 = s.length();
        //int len2 = len1 * 2;
        //char dob[len2];
        for (int i = 0; i < len1; ++i)
        {
            cout << s[i];
        }
        for (int j = len1 - 1; j >= 0;  --j)
        {
            cout << s[j];
        }

        cout << endl;
    }

    return 0;
}