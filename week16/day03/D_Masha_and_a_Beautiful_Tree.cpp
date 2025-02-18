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

        int rq=1;
        int cnt=0;
        int c=3;

        while(v.size()>1)
        {
            vector<int> a;

            for(int i=0; i<v.size()-1; i+=2)
            {
                if(abs(v[i]-v[i+1])!=rq)
                {
                    c=1;
                }
                else
                {
                    if(v[i]>v[i+1])
                    {
                        cnt++;
                    }
                    a.push_back(min(v[i],v[i+1]));
                }
            }
            v=a;
            rq*=2;
        }

        if(c)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }

    return 0;
}