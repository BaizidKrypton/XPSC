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
        string s,v;
        cin>>s;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                v+='D';
            }
            else if(s[i]=='D')
            {
                v+='U';
            }
            else
            {
                v+="LR";
                i++;
            }
        }
        cout<<v<<endl;
    }

    return 0;
}