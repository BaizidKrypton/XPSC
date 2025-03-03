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
        int low=0;
        int up=INT_MAX;
        set<int> st;

        for(int i=0; i<n; i++)
        {
            int op,val;
            cin>>op>>val;

            if(op==1)
            {
                low=max(low,val);
            }
            else if(op==2)
            {
                up=min(up,val);
            }
            else
            {
                st.insert(val);
            }
        }

        int ans=up-low+1;

        for(auto v:st)
        {
            if(low<=v && v<=up)
            {
                ans-=1;
            }
        }

        if(ans>0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}