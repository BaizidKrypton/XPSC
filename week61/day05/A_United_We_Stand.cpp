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
        vector<int> a(n);
        vector<int> b,c;
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        if(mp.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(a.begin(),a.end());
            b.push_back(a[0]);
            int i=1;
            while(a[i]==a[i-1])
            {
                b.push_back(a[i]);
                i++;
            }
            while(i<n)
            {
                c.push_back(a[i]);
                i++;
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int x:b)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x:c)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}