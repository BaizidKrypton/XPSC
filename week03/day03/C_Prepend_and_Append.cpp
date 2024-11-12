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
        int i=0;
        int j=s.size()-1;
        int size=s.size();
        while(i<=j)
        {
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0'))
            {
                size-=2;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }

        cout<<size<<endl;
    }

    return 0;
}