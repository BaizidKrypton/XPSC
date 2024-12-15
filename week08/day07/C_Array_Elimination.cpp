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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int> bit;
        for(int i=0; i<30; i++)
        {
            bit.push_back(0);
        }

        for(int i=0; i<30; i++)
        {
            ll num=(1ll<<i);
            for(int j=0; j<n; j++)
            {
                if((v[j] & num)!=0)
                {
                    bit[i]++;
                }
            }
        }

        for(int k=1; k<=n; k++)
        {
            bool flag=0;
            for(int i=0; i<30; i++)
            {
                if((bit[i]%k)!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}