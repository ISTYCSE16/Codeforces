#include <bits/stdc++.h>
#define LLI long long int

using namespace std;

int main()
{
    LLI test;
    LLI person;
    LLI seat;

    scanf("%lld", &test);

    for (LLI i = 0; i < test; ++i)
    {
        scanf("%lld %lld", &person, &seat);
        LLI empt_seat[person];

        for (LLI j = 0; j < person; ++j)
        {
            scanf("%lld", &empt_seat[j]);
        }

        sort(empt_seat, empt_seat + person, greater<LLI>());

        LLI max_seat = 0;

        for (LLI j = 0; j < person - 1; ++j)
        {
            max_seat += empt_seat[j] + 1;
        }
        max_seat += empt_seat[0] + 1;

        if (max_seat <= seat)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}