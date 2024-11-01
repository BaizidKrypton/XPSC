#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> v;
    for(int i=0; i<n; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        s2+=";";
        v.push_back({s1,s2});
    }

    for(int i=0; i<m; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        for(int j=0; j<v.size(); j++)
        {
            if(v[j].second==s2)
            {
                cout<<s1<<" "<<s2<<" "<<+"#"+v[j].first<<endl;
            }
        }
    }

    return 0;
}