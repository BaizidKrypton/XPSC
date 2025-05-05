#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<int> st;

    for(int i=1; i<s.size()-1; i+=3)
    {
        st.insert(s[i]);
    }

    cout<<st.size()<<endl;

    return 0;
}