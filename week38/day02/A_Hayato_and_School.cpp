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

        int odd=0;
        int even=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        bool flag=false;
        int x=0;
        if(odd>=3)
        {
            x=1;
            flag=true;
        }
        else if(even>=2 && odd>=1)
        {
            x=2;
            flag=true;
        }

        if(x==1)
        {
            odd=3;
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                if(v[i]%2!=0 && odd)
                {
                    cout<<i+1<<" ";
                    odd--;
                }
            }
            cout<<endl;
        }
        else if(x==2)
        {
            cout<<"YES"<<endl;
            even=2;
            odd=1;
            for(int i=0; i<n; i++)
            {
                if(v[i]%2==0 && even)
                {
                    cout<<i+1<<" ";
                    even--;
                }
                else if(v[i]%2!=0 && odd)
                {
                    cout<<i+1<<" ";
                    odd--;
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}