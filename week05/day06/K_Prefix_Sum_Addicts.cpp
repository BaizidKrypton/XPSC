#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(k);
        for(int i=0; i<k; i++)
        {
            cin>>v[i];
        }

        if(k==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            vector<ll> ans(n);
            int j=n-1;
            for(int i=k-1; i>0; i--)
            {
                ans[j]=v[i]-v[i-1];
                j--;
            }

            while(j>=0)
            {
                ans[j]=ans[j+1];
                v[0]-=ans[j];
                j--;
            }

            ans[0]+=v[0];
            bool flag=true;
            for(int i=0; i<n-1; i++)
            {
                if(ans[i]>ans[i+1])
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}