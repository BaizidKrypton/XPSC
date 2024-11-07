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
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        int mx=n;
        int mn=1;

        int i=0;
        int j=n-1;
        int l;
        int r;
        int flag=0;

        while(i<=j)
        {
            if((v[i]==mn && v[i]==mx) && (v[j]==mn && v[j]==mx))
            {
                i++;
                j--;
                mn++;
                mx--;
            }
            else if(v[i]==mn)
            {
                i++;
                mn++;
            }
            else if(v[i]==mx)
            {
                i++;
                mx--;
            }
            else if(v[j]==mn)
            {
                j--;
                mn++;
            }
            else if(v[j]==mx)
            {
                j--;
                mx--;
            }
            else
            {
                flag=1;
                l=i;
                r=j;
                break;
            }
        }
        
        if(flag)
        {
            cout<<l+1<<" "<<r+1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}