#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int sz=s.size();
        int f=s[0]-'0';
        int last=sz*(sz+1)/2;
        f--;
        int sum=f*(4*(4+1)/2);
        sum+=last;
        cout<<sum<<endl;
    }

    return 0;
}