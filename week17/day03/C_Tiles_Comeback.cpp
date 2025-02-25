#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int first_color=v[0];
        int last_color=v[n-1];

        int cnt_first=0;
        int pos_first;
        for(int i=0; i<n; i++)
        {
            if(v[i]==first_color)
            {
                cnt_first++;
                if(cnt_first==k)
                {
                    pos_first=i;
                }
            }
        }

        int cnt_last=0;
        int pos_last;

        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==last_color)
            {
                cnt_last++;
                if(cnt_last==k)
                {
                    pos_last=i;
                    break;
                }
            }
        }

        if(cnt_first==k && cnt_last==k && (pos_first<=pos_last || first_color==last_color))
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