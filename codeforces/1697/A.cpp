#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d", &n, &m);
        int a[n];
        int restore = 0;

        for (int j = 0 ; j < n ; ++j)
        {
            scanf("%d", &a[j]);
        }

        for (int j = 0 ; j < n ; ++j)
        {
            //printf("HOCCHE KI?");
            if (m >= a[j])
            {
                m = m - a[j];
                //printf("m == %d\n", m);
            }
            else 
            {
                restore = restore + (a[j] - m);
                m = m + (a[j] - m);
                m = m - a[j];
                //printf("m == %d\n", m);
                //printf("restore == %d\n", restore);
            }
            //printf("HOCCHE KI?");
        }

        printf("%d\n", restore);
    }

    return 0;
}