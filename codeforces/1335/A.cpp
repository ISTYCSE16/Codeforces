#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int test, n;
    scanf("%d", &test);
    int count;
    for(int i = 0 ; i < test ; ++i)
    {
        count = 0;
        scanf("%d", &n);
        int half1 = n / 2;
        int half2 = n - half1;

        if(half1 == half2)
        {
            printf("%d\n", half1 - 1);
        }
        else
        {
            printf("%d\n", half1 > half2 ? half2 : half1);
        }
        
    }
    return 0;
}