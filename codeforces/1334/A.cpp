#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

bool sorted(int a[], int b[], int n)
{
    for(int i = 0 ; i < n - 1 ; ++i)
    {
        int x = a[i + 1] - a[i];
        int y = b[i + 1] - b[i];
        if(a[i] < a[i + 1] && b[i] > b[i + 1])
        {
            return false;
        }  
        else if(a[i] > a[i + 1] && b[i] < b[i + 1])
        {
            return false;
        }
        else if(a[i] > a[i + 1] && b[i] > b[i + 1])
        {
            return false;
        }
        else if(a[i] == a[i + 1] && b[i] < b[i + 1])
        {
            return false;
        }
        else if(a[i] == a[i + 1] && b[i] > b[i + 1])
        {
            return false;
        }
        else if(a[i] > a[i + 1] && b[i] == b[i + 1])
        {
            return false;
        }
        else if(a[i] < a[i + 1] && b[i] < b[i + 1] && y > x)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
    
}

int main()
{
    int test;
    int n;
    int p[120], c[120];
    bool flag;

    scanf("%d", &test);
    for(int i = 0 ; i < test ; ++i)
    {
        scanf("%d", &n);
        for(int j = 0 ; j < n ; ++j)
        {
            scanf("%d %d", &p[j], &c[j]);
        }
        if(n == 1)
        {
            if(p[0] < c[0])
            {
                printf("NO\n");
                continue;
            }
            else
            {
                printf("YES\n");
                continue;
            }
        }
        if(p[0] < c[0])
        {
            printf("NO\n");
            continue;
        }
        flag = sorted(p, c, n);
        
        if(!flag)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        

    }
}