#include <stdio.h>
#include <stdlib.h>
#define LLI long long int

using namespace std;

int main()
{
    LLI testCase;
    LLI sizeSeries;
    LLI seriesValue;
    LLI maxi;

    scanf("%lld", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        maxi = 0;
        scanf("%lld", &sizeSeries);
        for (int i = 1; i <= sizeSeries; i++)
        {
            scanf("%lld", &seriesValue);

            if (seriesValue > i && maxi < (seriesValue - i))
            {
                maxi = seriesValue - i;
            }
        }

        printf("%lld\n", maxi);
    }


    return 0;
}