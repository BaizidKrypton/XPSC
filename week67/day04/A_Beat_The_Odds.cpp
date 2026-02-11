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

        int odd=0;
        for(int x:v)
        {
            if(x%2==1)
            {
                odd++;
            }
        }

        cout<<min(odd,n-odd)<<endl;
    }
}