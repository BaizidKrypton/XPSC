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
        string s;
        cin>>s;

        map<char,int> mp1;
        map<char,int> mp2;
        int j=1;
        for(char c='A'; c<='Z'; c++)
        {
            mp1[c]=j;
            j++;
        }
        for(int i=0; i<n; i++)
        {
            mp2[s[i]]++;
        }

        int cnt=0;
        for(auto[x,y]:mp2)
        {
            if(y>=mp1[x])
            {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}