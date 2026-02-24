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
        vector<int> a(n),b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b.begin(),b.end());
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if((a[i]%2)!=(b[i]%2))
            {
                flag=0;
                break;
            }
        }

        if(flag)
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