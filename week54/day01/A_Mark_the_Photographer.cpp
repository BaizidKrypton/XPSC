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
        vector<int> v(n*2);

        for(int i=0; i<n*2; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        vector<int> a,b;

        for(int i=0; i<n*2; i++)
        {
            if(i<n)
            {
                a.push_back(v[i]);
            }
            else
            {
                b.push_back(v[i]);
            }
        }

        bool flag=1;
        for(int i=0; i<n; i++)
        {
            if((b[i]-a[i])<k)
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