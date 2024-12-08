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

        vector<int> a(n);
        a=v;
        sort(a.begin(),a.end());
        
        vector<int> b;
        for(int i=0; i<n; i++)
        {
            int dif=abs(v[i]-a[i]);
            b.push_back(dif);
        }
        
        int k=0;
        for(int i=0; i<b.size(); i++)
        {
            k=__gcd(k,b[i]);
        }
        cout<<k<<endl;
        // int n;               
        // cin>>n;
 
        // vector<int> v(n+1);
 
        // int k=0;
 
        // for(int i=1; i<=n; i++)
        // {
        //     cin>>v[i];
        // }
 
        // for(int i=1; i<=n; i++)
        // {
        //     k=__gcd(k,abs(v[i]-i));
        // }
 
        // cout<<k<<endl;
    }

    return 0;
}