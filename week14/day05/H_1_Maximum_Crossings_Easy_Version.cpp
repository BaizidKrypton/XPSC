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
        vector<int> v1(n);
        vector<int> v2;
        
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
            v2.push_back(v1[i]);
        }
        sort(v2.begin(),v2.end());

        int x;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(v1[i]==*(v2.rbegin()))
            {
                x=v2.size();
                sum+=(x-1);
                v2.pop_back();
                continue;
            }
            x=lower_bound(v2.begin(),v2.end(),v1[i]+1)-v2.begin();
            sum+=(x-1);
            v2.erase(v2.begin()+x-1);
        }
        
        cout<<sum<<endl;
    }

    return 0;
}
