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


        int c=count(v.begin(),v.end(),v[0]);
        int sz=v.size();
        int zero=count(v.begin(),v.end(),0);
        v.erase(remove(v.begin(),v.end(),0),v.end());
        int cnt=count(v.begin(),v.end(),v[0]);
        int sz1=v.size();
    
        if(c==sz)
        {
            cout<<"YES"<<endl;
        }
        else if(zero>=1 && cnt==sz1)
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