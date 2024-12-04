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
 
        vector<int> v(n+1);
 
        int ans=0;
 
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
 
        for(int i=1; i<=n; i++)
        {
            ans=__gcd(ans,abs(v[i]-i));
        }
 
        cout<<ans<<endl;
    }

    return 0;
}