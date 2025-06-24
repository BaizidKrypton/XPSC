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

        int cnt=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='1')
            {
                i++;
                int tmp=0;
                while(s[i]!='1' && i<s.size())
                {
                    tmp++;
                    i++;
                    if(s[i]=='1')
                    {
                        cnt+=tmp;
                        break;
                    }
                }
            }
            else
            {
                i++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}