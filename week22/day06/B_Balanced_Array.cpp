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

        int x=2;
        int sum=0;
        for(int i=0; i<n/2; i++)
        {   
            v.push_back(x);
            sum+=x;
            x+=2;
        }

        x=1;
        int flag=1;
        for(int i=n/2; i<n; i++)
        {
            if(i==n-1)
            {
                if(sum%2==0)
                {
                    flag=0;
                    break;
                }
                else
                {
                    v.push_back(sum);
                }
            }
            else
            {
                sum-=x;
                v.push_back(x);
                x+=2;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
            for(int val:v)
            {
                cout<<val<<" ";
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