#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector < int > odd, even;
    int numbers;
    int odd_size, even_size;
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i)
    {
        scanf("%d", &numbers);
        sum += numbers;
        if(numbers % 2 == 0)
        {
            even.push_back(numbers);
        }
        else
        {
            odd.push_back(numbers);
        }
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    odd_size = odd.size();
    even_size = even.size();
    int k = min(odd.size(), even.size());
    sum -= accumulate(odd.begin(), odd.begin() + k, 0);
    sum -= accumulate(even.begin(), even.begin() + k, 0);
    if(odd_size > k)
    {
        sum -= odd[k];
    }
    else if(even_size > k)
    {
        sum -= even[k];
    }
    printf("%d\n", sum);
    return 0;
}
