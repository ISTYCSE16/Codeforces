#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    vector < int > one, two;
    int numbers[200020];
    int n;
    int flag = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    sort(numbers, numbers + n);
    one.push_back(numbers[0]);
    for(int i = 0 ; i < n - 1 ; ++i)
    {
        if(numbers[i] != numbers[i + 1] && flag == 0)
        {
            one.push_back(numbers[i + 1]);
        }
        else if(numbers[i] != numbers[i + 1] && flag == 1)
        {
            one.push_back(numbers[i + 1]);
            flag = 0;
        }
        else if(numbers[i] == numbers[i + 1] && flag == 0)
        {
            two.push_back(numbers[i + 1]);
            flag = 1;
        }
        else if(numbers[i] == numbers[i + 1] && flag == 1)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    int size_one = one.size();
    int size_two = two.size();
    printf("%d\n", size_two);
    for(int i = 0 ; i < size_two ; ++i)
    {
        if(i < size_two - 1)
        {
            printf("%d ", two[i]);
        }
        else
        {
            printf("%d", two[i]);
        }
    }
    printf("\n");
    printf("%d\n", size_one);
    for(int i = size_one - 1 ; i >= 0 ; --i)
    {
        if(i > 0)
        {
            printf("%d ", one[i]);
        }
        else
        {
            printf("%d", one[i]);
        }
    }
    printf("\n");
    return 0;
}
