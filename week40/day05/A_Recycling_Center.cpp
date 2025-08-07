#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x<=c)
            {
                v.push_back(x);
            }
        }

        sort(v.rbegin(),v.rend());
        int cnt=0;
        int cur=1;
        for(int i=0; i<v.size(); i++)
        {
            if((v[i]*cur)<=c)
            {
                cnt++;
                cur=cur*2;
            }
        }
        cout<<n-cnt<<endl;
    }

    return 0;
}