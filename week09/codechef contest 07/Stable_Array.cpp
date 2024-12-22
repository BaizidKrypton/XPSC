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
        int mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }

        vector<int> d;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]<v[i+1])
            {
                d.push_back(v[i+1]-v[i]);
            }
        }

        sort(d.begin(),d.end());

        if(is_sorted(v.begin(),v.end(),greater<int>()))
        {
            cout<<"0"<<endl;
        }
        else
        {
                int sec=0;   
                int j=1;
                while(!is_sorted(v.begin(),v.end(),greater<int>()) && count(v.begin(),v.end(),mx)!=v.size() && j<d.size())
                {
                
                    for(int i=0; i<n-1; i++)
                    {
                        if(v[i]<v[i+1])
                        {
                            v[i]=v[i+1];
                        }
                    }
                    sec++;
                    j++;
                }
            cout<<sec<<endl;
        }
    }

    return 0;
}