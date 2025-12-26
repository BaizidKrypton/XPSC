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
        map<char,int> mp;
        int flag=1;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            if(s[i]=='R' && mp['r']==0)
            {
                flag=0;
                break;
            }
            else if(s[i]=='G' && mp['g']==0)
            {
                flag=0;
                break;
            }
            else if(s[i]=='B' && mp['b']==0)
            {
                flag=0;
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
