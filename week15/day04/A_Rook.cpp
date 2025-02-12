#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int x=s[1]-'0';
        int y;
        for(int i=1; i<=8; i++)
        {
            if(x==i)
            {
                y=i;
                break;
            }
        }

        // string a="abcdefgh";
        // char c;
        // for(char i='a'; i<='h'; i++)
        // {
        //     if(s[0]==i)
        //     {
        //         c=i;
        //     }
        // }

        for(int i=1; i<=8; i++)
        {
            if(y==i)
            {
                continue;
            }
            cout<<s[0]<<i<<endl;
        }

        for(char i='a'; i<='h'; i++)
        {
            if(s[0]==i)
            {
                continue;
            }
            cout<<i<<s[1]<<endl;
        }
    }

    return 0;
}