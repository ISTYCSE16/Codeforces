#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
    char s[200005];
    int i,len,c, b;

    scanf("%s",&s);
    len=strlen(s); 

    // cout << "Got " << s << endl;
    
    // Check string[0], if it is lower, then put b=1 else b=0

    if (s[0] >= 'a' && s[0] <= 'z')
    //if (islower(s[0]))
    {
        b=1; // lower first
    }
    else {
        b=0;
    }
    
    
    // Check the next elemants; if it is upper then  c=c+1

    c = 0;

    for(i=1;i<len;i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
    }
    
    //Ashol Khela Shuru
    
    //prothomta lowercase tarpor shob upper
    if(b==1 && c==len-1)
    {
        // cout << "!" << s[0];
        s[0] = (char)(s[0]-'a'+'A'); // (char) (s[0] - 32);
        // cout << ">" << s[0];
        //s[0]=toupper(s[0]);
        for(i=1;i<len;i++) 
        {
            // cout << "!" << s[i];
            s[i] = (char)(s[i]-'A'+'a');// (char) (s[i] + 32);
            // cout << ">" << s[i];
        } 
         
    }
    
    //All are uppercase
    else if(b==0 && c==len-1)
    {
        for(i=0;i<len;i++)
        {
            // cout << "!" << s[i];
            s[i] =  (char)(s[i]-'A'+'a');
            // cout << ">>" << s[i];
        }
    
    }
    
    printf("%s",s);
    return 0;
}