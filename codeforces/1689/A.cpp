#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int lenA;
    int lenB;
    int k;

    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> lenA >> lenB >> k;

        string a, b, c;
        cin >> a >> b;

        sort(a.begin(), a.end(), greater<char>());
        sort(b.begin(), b.end(), greater<char>());

        int a_turn = 0;
        int b_turn = 0;

        while(!a.empty() && !b.empty())
        {
            bool turn = a.back() < b.back();
            
            if (turn && a_turn == k) turn = 0;
            if (!turn && b_turn == k) turn = 1;

            if (turn) 
            {
                c.push_back(a.back());
                a_turn++;
                b_turn = 0;
                a.pop_back();
            } 
            else
            {
                c.push_back(b.back());
                b_turn++;
                a_turn = 0;
                b.pop_back();
            }
        }

        cout << c << "\n";
    }

    return 0;
}