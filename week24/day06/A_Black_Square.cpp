#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    int sum=0;

    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        x--;
        sum+=v[x];
    }

    cout<<sum<<endl;

    return 0;
}