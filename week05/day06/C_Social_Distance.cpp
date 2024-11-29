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
        int cnt=0;
        vector<int> v;
        
        int idx;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i);
            }
        }

        if(v.size()==0)
        {
            for(int i=0; i<n; )
            {
                cnt++;
                i+=(k+1);
            }
        }
        else
        {
            for(int i=v[v.size()-1]+(k+1); i<n; i+=(k+1))
            {
                cnt++;
            }
            for(int i=0; i<=v[0]-(k+1); i+=(k+1))
            {
                cnt++;
            }
            for(int i=0; i<v.size()-1; i++)
            {
                int st=v[i];
                int ed=v[i+1];
                for(int j=st+(k+1); j<=ed-(k+1); j+=(k+1))
                {
                    cnt++;
                }
            }
        }

        
        cout<<cnt<<endl;
    }

    return 0;
}
