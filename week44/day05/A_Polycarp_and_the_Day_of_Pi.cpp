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
        string v="3141592653589793238462643383279";

        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==v[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}