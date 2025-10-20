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

        auto s=min_element(v.begin(),v.end());
        auto m=max_element(v.begin(),v.end());
        int ans1=0;
        for(int i=0; i<n; i++)
        {
            ans1++;
            if(v[i]==*s)
            {
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            ans1++;
            if(v[i]==*m)
            {
                break;
            }
        }

        int ans2=0;
        for(int i=n-1; i>=0; i--)
        {
            ans2++;
            if(v[i]==*s)
            {
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            ans2++;
            if(v[i]==*m)
            {
                break;
            }
        }

        int ans3=0;
        int flag1=1;
        int flag2=1;
        for(int i=0; i<n; i++)
        {
            if(flag1 || flag2)
            {
                ans3++;
                if(v[i]==*s)
                {
                    flag1=0;
                }
                if(v[i]==*m)
                {
                    flag2=0;
                }
            }
        }

        int ans4=0;
        int flag3=1;
        int flag4=1;
        for(int i=n-1; i>=0; i--)
        {
            if(flag3 || flag4)
            {
                ans4++;
                if(v[i]==*s)
                {
                    flag3=0;
                }
                if(v[i]==*m)
                {
                    flag4=0;
                }
            }
        }

        int ans=min({ans1,ans2,ans3,ans4});
        cout<<ans<<endl;
    }

    return 0;
}