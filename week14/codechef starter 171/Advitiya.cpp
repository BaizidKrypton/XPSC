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
        string t="ADVITIYA";
        int cnt=0;

        for(int i=0; i<8; i++)
        {
            if(s[i]!=t[i])
            {
                if(s[i]<t[i])
                {
                    cnt+=abs(s[i]-t[i]);
                }
                else
                {
                    cnt+='Z'-s[i];
                    s[i]='A';
                    cnt++;
                    cnt+=abs(s[i]-t[i]);
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}