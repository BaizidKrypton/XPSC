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
        string ans;
        ans=s;

        for(int i=0; i<n; i++)
        {
            if(ans[i]!='z')
            {
                ans[i]='z';
            }
        }

        string rev_ans=ans;
        reverse(rev_ans.begin(),rev_ans.end());
        if(ans>s && rev_ans>s)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}