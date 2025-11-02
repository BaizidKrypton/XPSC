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
        vector<int> v(n),x(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int a=1;
        for(int i=0; i<n; i++)
        {
            if(v[i]==a)
            {
                a++;
                x[i]=a;
                a++;
            }
            else
            {
                x[i]=a;
                a++;
            }
        }

        cout<<x[n-1]<<endl;
    }

    return 0;
}