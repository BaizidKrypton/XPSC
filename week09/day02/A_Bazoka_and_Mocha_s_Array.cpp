#include <bits/stdc++.h>
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

        if(is_sorted(v.begin(),v.end()))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            int idx;
            int flag=0;
            int a_mn=INT_MAX;
            for(int i=0; i<n-1; i++)
            {
                a_mn=min(a_mn,v[i]);
                if(v[i]>v[i+1])
                {
                    idx=i+1;
                    break;
                }
            }
            if(is_sorted(v.begin()+idx,v.end()))
            {
                if(v[n-1]<=a_mn)
                {
                    flag=1;
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