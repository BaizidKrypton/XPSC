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

        int cur=0;
        int flag=1;

        for(int i=0; i<n; i++)
        {
            if(v[i]<cur)
            {
                flag=0;
                continue;
            }
            else
            {
                int x=v[i]/10;
                int y=v[i]%10;
                if(x>=cur)
                {
                    if(y>=x)
                    {
                        cur=y;
                    }
                    else
                    {
                        cur=v[i];
                    }
                }
                else
                {
                    cur=v[i];
                }
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
