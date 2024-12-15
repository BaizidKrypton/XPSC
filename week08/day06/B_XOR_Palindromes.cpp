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

        int pair=0;
        int at_least=0;

        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                pair+=2;
            }
            else
            {
                at_least++;
            }
            l++;
            r--;
        }

        vector<int> v;
        for(int i=0; i<=n; i++)
        {
            int total=i;
            total-=at_least;
            if(total<0)
            {
                v.push_back(0);
                continue;
            }
            total=max((total%2),(total-pair));
            total=max(0,total-(n%2));
            if(total==0)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }

        for(int val:v)
        {
            cout<<val;
        }
        cout<<endl;
    }

    return 0;
}