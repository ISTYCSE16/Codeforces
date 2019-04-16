#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a_b, b_c, c_a, a_b_c;
    int a, b, c;
    int arr[4];
    for(int i = 0 ; i < 4 ; ++i)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + 4);
    a_b = arr[0];
    b_c = arr[1];
    c_a = arr[2];
    a_b_c = arr[3];
    a = a_b_c - b_c;
    b = a_b - a;
    c = b_c - b;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
