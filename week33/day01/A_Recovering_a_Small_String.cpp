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

        string s="aaa";
        int x=3;

        while(n!=x)
        {
            if(s[2]!='z')
            {
                s[2]++;
                x++;
            }
            else if(s[1]!='z')
            {
                s[1]++;
                x++;
            }
            else
            {
                s[0]++;
                x++;
            }
        }

        cout<<s<<endl;
    }

    return 0;
}