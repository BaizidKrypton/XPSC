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
        priority_queue<int> p;
        long long int army=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {
                p.push(x);
            }
            else
            {
                if(!p.empty())
                {
                    army+=p.top();
                    p.pop();
                }
            }
        }
        cout<<army<<endl;
    }

    return 0;
}