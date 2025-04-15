#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        string ss=s;
        reverse(s.begin(),s.end());

        if(k>0)
        {
            if(s<ss || s>ss)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                map<int,int> mp;
                for(int i=0; i<s.size(); i++)
                {
                    mp[s[i]]++;
                }
                if(mp.size()>1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            if(s<ss)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}