#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        vector<int> v(n);
        int less=0,high=0,sim=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]>a)
            {
                high++;
            }
            else if(v[i]==a)
            {
                sim++;
            }
            else
            {
                less++;
            }
        }

        if(high>less)
        {
            cout<<a+1<<endl;
        }
        else
        {
            cout<<a-1<<endl;
        }
    }

    return 0;
}