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
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
 
        if(n<=2)
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            float avg=sum/(2.0*n); 
            int need=ceil(n/2); 
 
            if(v[need]<avg)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<((ll)v[need]*n*2+1)-sum<<endl;
            }
        }
    }

    return 0;
}