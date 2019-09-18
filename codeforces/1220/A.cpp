#include <bits/stdc++.h>
#define MAX 100020

using namespace std;

int main()
{
    char letter[MAX];
    int l;
    int n = 0;
    int z = 0;
    scanf("%d", &l);
    scanf("%s", letter);
    for(int i = 0 ; i < l ; ++i)
    {
        if(letter[i] == 'n')
        {
            n++;
        }
        else if(letter[i] == 'z')
        {
            z++;
        }
        else continue;
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        if(z == 0)
        {
            if(i != n)
            {
                printf("1 ");
            }
            else
            {
                printf("1");
            }
        }
        else printf("1 ");
        
    }
    for(int i = 1 ; i <= z ; ++i)
    {
        if(i != z)
        {
            printf("0 ");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}