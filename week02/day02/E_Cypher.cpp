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
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        pair<int,string> p[n];
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            p[i]={x,s};
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<p[i].first; j++)
            {
                if(p[i].second[j]=='U')
                {
                    if(v[i]==0)
                    {
                        v[i]=9;
                    }
                    else
                    {
                        v[i]--;
                    }
                }
                else
                {
                    if(v[i]==9)
                    {
                        v[i]=0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
            }
        }
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
     }

    return 0;
}