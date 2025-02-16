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

        int c=0, mx;
        int mn=INT_MAX;
        for(char i='a'; i<='z'; i++)
        {
            c=0;
            mx=0;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]!=i)
                {
                    c++;
                    if(c>mx)
                    {
                        mx=c;
                    }
                }
                else
                {
                    c=0;
                }
            }
            if(mx<mn)
            {
                mn=mx;
            }
        }
        
        if(mn==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            c=0;
            while(mn!=1)
            {
                mn/=2;
                c++;
            }
            cout<<c+mn<<endl;
        }     
    }

    return 0;
}