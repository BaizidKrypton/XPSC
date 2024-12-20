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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end()))
        {
            cout<<"0"<<endl;
        }
        else
        {
            int cnt=0;
            for(int i=0; i<n; i++)
            {
                if((abs(v[i]-(i+1)))%k!=0)
                {
                    cnt++;
                }
            }
            if(cnt>2)
            {
                cout<<"-1"<<endl;
            }
            else if(cnt==2)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }

    return 0;
}