#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, rating;
    scanf("%d", &t);
    for (int i = 0 ; i < t; ++i)
    {
        scanf("%d", &rating);
        if (rating >= 1900) printf("Division 1\n");
        else if (rating <= 1899 && rating >= 1600) printf("Division 2\n");
        else if (rating <= 1599 && rating >= 1400) printf("Division 3\n");
        else printf("Division 4\n");
    }
    
    return 0;
}