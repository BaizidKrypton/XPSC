#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        int b;

        for(int i=0; i<n; i++) 
        {
            cin>>a[i];
        }
        cin>>b;

        for(int i=0; i<n; i++) 
        {
            if(i==0) 
            {
                if(b-a[i]<a[i])
                {
                    a[i]=b-a[i];
                }
            }
            else
            {
                int tmp=a[i];
                if(b-a[i]<=tmp && b-a[i]>=a[i-1])
                {
                    a[i]=b-a[i];
                }
            }
        }

        if (is_sorted(a.begin(), a.end())) 
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
