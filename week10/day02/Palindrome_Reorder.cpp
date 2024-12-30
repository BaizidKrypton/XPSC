#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto val:s)
    {
        mp[val]++;
    }

    int cnt=0;

    for(auto [x,y]:mp)
    {
        if(y%2==1)
        {
            cnt++;
            if(cnt>1)
            {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
        }
    }

    string ans;
    char c='a';
    for(auto [x,y]:mp)
    {
        for(int i=0; i<y/2; i++)
        {
            ans.push_back(x);
        }
        if(y%2==1)
        {
            c=x;
        }
    }

    s=ans;
    if(c!='a')
    {
        s+=c;
    }

    reverse(ans.begin(),ans.end());
    s+=ans;
    cout<<s<<endl;

    return 0;
}