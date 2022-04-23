#include <bits/stdc++.h>
#define LLI long long int

using namespace std;

int main()
{
    LLI t, n;

    scanf("%lld", &t);

    for (int i = 0; i < t; ++i)
    {
        scanf("%lld", &n);

        LLI logs;
        LLI logs_sum = 0;
        for (int j = 0; j < n; ++j)
        {
            scanf("%lld", &logs);
            logs_sum += logs;
        }

        if (n % 2 == 0)
        {
            if(logs_sum % 2 == 1)
            {
                printf("errorgorn\n");
            }
            else if (logs_sum % 2 == 0)
            {
                printf("maomao90\n");
            }
        }
        else 
        {
            if (logs_sum % 2 == 1)
            {
                printf("maomao90\n");
            }
            else
            {
                printf("errorgorn\n");
            }
        }
        
    }

    return 0;
}