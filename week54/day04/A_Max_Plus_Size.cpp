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

        int even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            if((i+1)%2==0)
            {
                even=max(even,v[i]);
            }
            else
            {
                odd=max(odd,v[i]);
            }
        }

        int ans1,ans2;
        if(n%2==0)
        {
            ans1=(n/2)+even;
            ans2=(n/2)+odd;
            cout<<max(ans1,ans2)<<endl;
        }
        else
        {
            ans1=(n/2)+even;
            ans2=((n/2)+1)+odd;
            cout<<max(ans1,ans2)<<endl;
        }
    }

    return 0;
}