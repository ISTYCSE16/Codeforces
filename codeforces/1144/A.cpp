#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[110];
    int n;
    char s[110];
    int flag;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; ++i)
    {
        scanf("%s", s);
        memset(arr, 0, sizeof(arr));
        int size = strlen(s);
        for(int j = 0 ; j < size ; ++j)
        {
            arr[j] = s[j] - 65;
        }
        sort(arr, arr + size);
        if(size == 1)
        {
            flag = 1;
        }
        else
        {

            for(int j = 0 ; j < size - 1 ; ++j)
            {
                if(arr[j + 1] - arr[j] == 1)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
