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
        string s;
        cin>>s;
        set<int> st;

        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }

        string s1;
        cin>>s1;
        sort(s1.begin(),s1.end());

        int idx=0;
        for(auto c:st)
        {
            s[c-1]=s1[idx];
            idx++;
        }

        cout<<s<<endl;
    }

    return 0;
}