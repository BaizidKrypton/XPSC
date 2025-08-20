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

        if(!is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
        }
        else
        {
            int dif=INT_MAX;
            for(int i=0; i<n-1; i++)
            {
                dif=min(dif,(v[i+1]-v[i]));
            }

            if(dif<=1)
            {
                cout<<1<<endl;
            }
            else if(dif==2)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<(dif/2)+1<<endl;
            }
        }
    }

    return 0;
}