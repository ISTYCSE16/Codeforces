#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define SIZE 100200

using namespace std;

int main()
{
    int test, n, temp;

    vector < int > arr;

    scanf("%d", &test);
    for(int i = 0 ; i < test ; ++i)
    {
        scanf("%d", &n);
        arr.clear();
        for(int j = 0 ; j < n ; ++j)
        {
            scanf("%d", &temp);
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        if(n % 2 == 0)
        {
            int half = n / 2;
            int left = half - 1;
            int right = half;

            while(left >= 0 && right <= n)
            {
                if(left == 0 && right == n)
                {
                    cout << arr[left] << " " << arr[right];
                }
                else
                {
                    cout << arr[left] << " " << arr[right] << " ";
                }
                left--;
                right++;
            }
            cout << endl;
        }

        else if(n % 2 != 0)
        {
            int half = n / 2;
            int left = half;
            int right = half + 1;

            while(left > 0 && right <= n)
            {
                cout << arr[left] << " " << arr[right] << " ";
                left--;
                right++;
            }
            cout << arr[left];
            cout << endl;
        }

    }

    return 0;
}