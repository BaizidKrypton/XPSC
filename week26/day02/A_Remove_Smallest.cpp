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
        vector<int> v;
        set<int> s;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }

        for(auto val:s)
        {
            v.push_back(val);
        }

        if(v.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        int flag=1;
        for(int i=0; i<v.size()-1; i++)
        {
            if(abs(v[i]-v[i+1])==1)
            {
                continue;
            }
            else
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