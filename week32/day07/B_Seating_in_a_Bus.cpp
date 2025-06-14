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
        vector<bool> x(n+2);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        x[v[0]-1]=true;
        x[v[0]+1]=true;

        int flag=1;
        for(int i=1; i<n; i++)
        {
            if(!x[v[i]])
            {
                flag=0;
                break;
            }

            x[v[i]-1]=true;
            x[v[i]+1]=true;
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