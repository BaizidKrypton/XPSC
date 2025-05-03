#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int flag=0;
        for(int i=0; i<a.size()-1; i++)
        {
            if(a[i]=='0' && b[i]=='0')
            {
                if(a[i+1]=='1' && b[i+1]=='1')
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}