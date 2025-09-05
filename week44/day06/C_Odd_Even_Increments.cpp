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
        
        int even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even=1;
            }
            else
            {
                odd=1;
            }
        }

        if(even && odd)
        {
            vector<int> x,y; 
            for(int i=0; i<n; i+=2)
            {
                x.push_back(v[i]);
            }
            for(int i=1; i<n; i+=2)
            {
                y.push_back(v[i]);
            }

            bool flag=1;
            int parity=x[0]%2;
            for(int i=0; i<x.size(); i++)
            {
                if(x[i]%2!=parity)
                {
                    flag=0;
                    break;
                }
            }

            parity=y[0]%2;
            for(int i=0; i<y.size(); i++)
            {
                if(y[i]%2!=parity)
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
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}