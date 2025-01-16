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
        set<int> st;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=1; i<=n; i++)
        {
            st.insert(i);
        }

        vector<int> ans;
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                auto x=st.begin();
                if(v[i]!=*x)
                {
                    ans.push_back(*x);
                    st.erase(x);
                }
                else
                {
                    if(st.size()==1)
                    {
                        ans.push_back(*x);
                        st.erase(x);
                        swap(ans[i],ans[i-1]);
                    }
                    else
                    {
                        x++;
                        ans.push_back(*x);
                        st.erase(x);
                    }
                }
            }
        }
        for(int val:ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}
