#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        ll mx_odd=0;
        ll mx_even=0;
        vector<ll> v;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            if(x%2!=0)
            {
                odd++;
                mx_odd=max(mx_odd,x);
            }
            else
            {
                even++;
                mx_even=max(mx_even,x);
            }
            v.push_back(x);
        }

        sort(v.begin(),v.end());
 
        int op=even;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0 && v[i]<mx_odd)
            {
                mx_odd+=v[i];
            }
        }

        if(even==v.size() || odd==v.size())
        {
            cout<<"0"<<endl;
        }
        else if(mx_odd>mx_even)
        {
            cout<<op<<endl;
        }
        else
        {
            cout<<op+1<<endl;
        }
    }

    return 0;
}
