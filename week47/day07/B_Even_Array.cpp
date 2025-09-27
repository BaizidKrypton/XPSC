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
        int even=0;
        int odd=0;

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

        if(n%2==0)
        {
            if(even!=odd)
            {
                cout<<-1<<endl;
            }
            else
            {
                int cnt=0;
                for(int i=0; i<n; i+=2)
                {
                    if(v[i]%2!=0)
                    {
                        cnt++;
                    }
                }
                cout<<cnt<<endl;
            }
        }
        else
        {
            if(even-1!=odd)
            {
                cout<<-1<<endl;
            }
            else
            {
                int cnt=0;
                for(int i=0; i<n; i+=2)
                {
                    if(v[i]%2!=0)
                    {
                        cnt++;
                    }
                }
                cout<<cnt<<endl;
            }
        }
    }

    return 0;
}