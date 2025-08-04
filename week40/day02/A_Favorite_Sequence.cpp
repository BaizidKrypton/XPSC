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

        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(i==j)
            {
                cout<<v[i];
            }
            else
            {
                cout<<v[i]<<" "<<v[j]<<" ";
            }
            i++;
            j--;
        }
        
        cout<<endl;
    }

    return 0;
}