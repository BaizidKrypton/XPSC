#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int x=1,y=n;
    int dif=abs(v[0]-v[n-1]);

    for(int i=0; i<n-1; i++)
    {
        if(abs(v[i]-v[i+1])<dif)
        {
            dif=abs(v[i]-v[i+1]);
            x=i+1;
            y=i+2;
        }
    }
    cout<<x<<" "<<y;

    return 0;
}