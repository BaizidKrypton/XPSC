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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        int flag=1;
        int ans=0;
        int i=0;
        int j=n-1;

        while(i<=j)
        {
            if (flag) 
            {
                ans = v[i];
                i++;
            }   
            else 
            {
                ans = v[j];
                j--;
            }
            flag = !flag;
        }
        cout<<ans<<endl;
    }

    return 0;
}
