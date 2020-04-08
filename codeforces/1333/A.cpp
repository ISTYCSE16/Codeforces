#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int test, n, m;

    scanf("%d", &test);

    for(int i = 0 ; i < test ; ++i)
    {
        scanf("%d %d", &n, &m);
        int area = n * m;
        if(area % 2 == 0)
        {
            int black = area / 2;
            int white = black;

            black++;
            white--;

            for(int j = 1 ; j <= n ; ++j)
            {
                for(int k = 1 ; k <= m ; ++k)
                {
                    if(j % 2 == 1)
                    {
                        if(k % 2 == 0)
                        {   
                            if(white != 0)
                            {
                                printf("W");
                                white--;
                            }
                            else
                            {
                                printf("B");
                                black--;
                            }
                            
                        }
                        else if(k % 2 == 1 && black != 0)
                        {
                            printf("B");
                            black--;
                        }
                    }
                    else
                    {
                        if(k % 2 == 1)
                        {
                            if(white != 0)
                            {
                                printf("W");
                                white--;
                            }
                            else
                            {
                                printf("B");
                                black--;
                            }
                            
                        }
                        else if(k % 2 == 0)
                        {
                            printf("B");
                            black--;
                        }
                    }
                }
                printf("\n");    
            }
        }
        else
        {            
            int white = area / 2;
            int black = white + 1;

            for(int j = 1 ; j <= n ; ++j)
            {
                for(int k = 1 ; k <= m ; ++k)
                {
                    if(j % 2 == 1)
                    {
                        if(k % 2 == 0)
                        {   
                            if(white != 0)
                            {
                                printf("W");
                                white--;
                            }
                            else
                            {
                                printf("B");
                                black--;
                            }
                            
                        }
                        else if(k % 2 == 1 && black != 0)
                        {
                            printf("B");
                            black--;
                        }
                    }
                    else
                    {
                        if(k % 2 == 1)
                        {
                            if(white != 0)
                            {
                                printf("W");
                                white--;
                            }
                            else
                            {
                                printf("B");
                                black--;
                            }
                            
                        }
                        else if(k % 2 == 0)
                        {
                            printf("B");
                            black--;
                        }
                    }
                }
                printf("\n");
            }
        }
        
    }
}