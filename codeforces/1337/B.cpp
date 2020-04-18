#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x;
    int n, m;
    int test;
    bool flag = false;

    scanf("%d", &test);
    for(int i = 0 ; i < test ; ++i)
    {
        flag = false;
        scanf("%d %d %d", &x, &n, &m);
        int temp;
        while(n > 0)
        {
            temp = (x / 2) + 10;
            if(temp >= x)
            {
                break;
            }
            else
            {
                x = temp;
            }
            n--;
        }
        while(m > 0)
        {
            x = x - 10;
            if(x <= 0)
            {
                flag = true;
                break;
            }
            m--;
        }
        if(flag)
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