#include <bits/stdc++.h>
#define  ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> pos;

        reverse(s.begin(),s.end());
        ll zero=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
                pos.push_back(i+1);
            }
        }

        ll k=1;
        ll prev=0;

        for(int i=0; i<pos.size(); i++)
        {
            cout<<pos[i]-k+prev<<" ";
            prev+=pos[i]-k;
            k++;
        }

        for(int i=0; i<n-zero; i++)
        {
            cout<<"-1" <<" ";
        }
        cout<<endl;
    }

    return 0;
}