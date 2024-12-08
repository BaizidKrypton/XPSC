#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        reverse(v.begin(),v.end());
        while(!v.empty() && v.back()==0)
        {
            v.pop_back();
        }
        
        ll cnt=0;
        if(v.empty())
        {
            cout<<cnt<<endl;
        }
        else
        {
            reverse(v.begin(),v.end());
            for(int i=0; i<v.size()-1; i++)
            {
                if(v[i]==0)
                {
                    cnt++;
                }
                else
                {
                    cnt+=v[i];
                }
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}