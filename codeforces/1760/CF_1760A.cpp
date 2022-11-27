#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a, b, c;

    scanf("%d", &t);
    for (int i = 0 ; i < t ; ++i)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        if (a > b && a > c){
            if (b > c) printf("%d\n", b);
            else printf("%d\n", c);
        }
        else if (b > a && b > c)
        {
            if (a > c) printf("%d\n", a);
            else printf("%d\n", c);
        }
        else
        {
            if (a > b) printf("%d\n", a);
            else printf("%d\n", b);
        }
    }
}