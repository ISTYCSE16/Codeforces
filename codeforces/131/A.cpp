#include <bits/stdc++.h>
 
using namespace std;

bool isUpper (char ch)
{
    if (ch >= 'A' && ch <= 'Z' )
    {
        return true;
    }
    return false;
}

void lowerCasing (char a[], int start, int len)
{
    for (int i = start; i < len; ++i)
    {
        a[i] = a[i] + 32;
    }
}

char makeUpper (char a)
{
    a = a - 32;
    return a;
}
 
 
int main()
{
    char str[1010];
 
    gets(str);
 
    int len = strlen(str);
 
    int case1 = 0;

    for (int i = 0; i < len; ++i)
    {
        if (!isUpper(str[i]) && i != 0)
        {
            case1 = 0;
            break;
        }
        if (i == 0)
        {
            if (!isUpper(str[i]))
            {
                case1 = 1;
            }
            else
            {
                case1 = 2;
            }
        }
    }
    
    if (case1 == 0)
    {
        printf("%s\n", str);
    }
    else if (case1 == 1)
    {
        str[0] = makeUpper(str[0]);
        lowerCasing(str, 1, len);
        printf("%s\n", str);
    }
    else
    {
        lowerCasing(str, 0, len);
        printf("%s\n", str);
    }

    return 0;
}