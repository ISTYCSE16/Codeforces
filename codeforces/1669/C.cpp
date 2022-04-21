#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    
    scanf("%d", &t);
    for (int i = 0 ; i < t; ++i)
    {
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &arr[j]);
        }

        int evencheck = arr[0] % 2;
        int oddcheck = arr[1] % 2;
        int checker = 0;


        for (int j = 2; j < n; ++j)
        {
            if (j % 2 == 0)
            {
                if ((arr[j] % 2 == 0 && evencheck == 1) || (arr[j] % 2 == 1 && evencheck == 0))
                {
                    printf("NO\n");
                    checker = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (j % 2 == 1)
            {
                if ((arr[j] % 2 == 0 && oddcheck == 1) || (arr[j] % 2 == 1 && oddcheck == 0))
                {
                    printf("NO\n");
                    checker = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }

        }

        if (checker == 0)
        {
            printf("YES\n");
        }
    }
}