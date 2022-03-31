#include <iostream>
#include <cstdio>
#include <algorithm>
#define LLI long long int

using namespace std;

int main()
{
    LLI t, n;

    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {

        scanf("%lld", &n);

        LLI candy[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &candy[j]);
        }

        sort(candy, candy + n);

        if(n == 1 && candy[n - 1] >= 2)
        {
            printf("NO\n");
        }
        else
        {
            if (candy[n - 1] - candy[n - 2] >= 2)
            {
                printf("NO\n");
            }
            else 
            {
                printf("YES\n");
            }
        }
        
    }

    return 0;
}