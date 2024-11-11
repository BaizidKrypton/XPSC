#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<string> st;
    map<string,int> mp;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        st.push(s);
        mp[s]++;
    }
    while(!st.empty())
    {
        if(mp[st.top()]>0)
        {
            string s=st.top();
            cout<<s[s.size()-2]<<s[s.size()-1];
            mp[st.top()]=0;
        }
        st.pop();
    }

    return 0;
}