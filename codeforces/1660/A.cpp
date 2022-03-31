#include <cstdio>
#include <iostream>
#define LLI long long int

using namespace std;

int main()
{
    LLI a, b, s;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (a == 0)
        {
            printf("1\n");
        }
        else
        {
            s = (a*1) + (b*2) + 1;
            printf("%lld\n", s);
        }
    }

    return 0;
}