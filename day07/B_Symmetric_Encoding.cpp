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
        string s;
        cin>>s;
        set<char> st;
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
        }

        vector<char> v;
        for(auto val:st)
        {
            v.push_back(val);
        }

        int i=0;
        int j=v.size()-1;
        map<char,char> mp;
        while(i<=j)
        {
            mp[v[i]]=v[j];
            mp[v[j]]=v[i];
            i++;
            j--;
        }

        for(int i=0; i<n; i++)
        {
            cout<<mp[s[i]];
        }
        cout<<endl;
    }

    return 0;
}