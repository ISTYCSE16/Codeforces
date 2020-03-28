#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{

    long long int t;
    long long int a, b;
    scanf("%lld", &t);
    for(int i = 1 ; i <= t ; ++i)
    {
        scanf("%lld %lld", &a, &b);
        if(a % b != 0)
        {
            if(a < b)
            {
                printf("%lld\n", (b - a));
            }
            else
            {
                a = a % b;
                printf("%lld\n", (b - a));
            }
        }
        else
        {
            printf("0\n");
        }
        
        
    }

    return 0;

}

