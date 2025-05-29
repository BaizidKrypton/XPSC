#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt=0;
    char c='a';
    for(int i=0; i<s.size(); i++)
    {
        int x=abs(c-s[i]);
        int y=abs(26-x);
        cnt+=(min(x,y));
        c=s[i];
    }
    cout<<cnt<<endl;

    return 0;
}