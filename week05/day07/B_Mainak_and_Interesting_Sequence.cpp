#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> ans(n);

        if(n>m)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2==0 && m%2==0)
        {
            cout<<"YES"<<endl;
            int sum=0;
            for(int i=0; i<n-2; i++)
            {
                ans[i]=1;
                sum++;
            }
            ans[n-2]=m-sum;
            ans[n-1]=m-sum;
            for(int v:ans)
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
        else if(n%2==1 && m%2==0)
        {
            cout<<"YES"<<endl;
            int sum=0;
            for(int i=0; i<n-1; i++)
            {
                ans[i]=1;
                sum++;
            }
            ans[n-1]=m-sum;
            for(int v:ans)
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
        else if(n%2==0 && m%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2==1 && m%2==1)
        {
            cout<<"YES"<<endl;
            int sum=0;
            for(int i=0; i<n-1; i++)
            {
                ans[i]=1;
                sum++;
            }
            ans[n-1]=m-sum;
            for(int v:ans)
            {
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
