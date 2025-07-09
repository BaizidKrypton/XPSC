#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        char c;
        cin>>c;

        bool flag=false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
