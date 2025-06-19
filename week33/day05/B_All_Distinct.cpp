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
        set<int> s;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }

        if(s.size()%2==0)
        {
            if(n%2==0)
            {
                cout<<s.size()<<endl;
            }
            else
            {
                cout<<s.size()-1<<endl;
            }
        }
        else
        {
            if(n%2!=0)
            {
                cout<<s.size()<<endl;
            }
            else
            {
                cout<<s.size()-1<<endl;
            }
        }
    }

    return 0;
}