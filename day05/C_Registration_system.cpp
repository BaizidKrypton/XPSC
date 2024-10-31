#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]=1;
        }
        else
        {
            int cnt=mp[s];
            string newname;
            newname=s+to_string(cnt);
            cout<<newname<<endl;
            cnt++;
            mp[s]=cnt;
        }
    }

    return 0;
}