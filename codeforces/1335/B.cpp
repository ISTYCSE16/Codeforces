#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int test, n, a, b;
    string given = "abcdefghijklmnopqrstuvwxyz";

    scanf("%d", &test);
    for(int i = 0 ; i < test ; ++i)
    {
        scanf("%d %d %d", &n, &a, &b);

        //if(b < a)
        //{
            int count = 0;
            while(1)
            {
                for(int k = 0 ; k < b ; ++k)
                {
                    if(count != n)
                    {
                        cout << given[k];
                        count++;
                    }
                }
                if(count == n)
                {
                    break;
                }
            }
            cout << endl;
        //}
        /*if(b == a)
        {
            for(int k = 0 ; k < n ; ++k)
            {
                cout << given[k];
            }
            cout << endl;
        }*/

    }

    return 0;
}