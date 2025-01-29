#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        priority_queue<int> pq;
        if(a>0)
        {
            pq.push(a);
        }
        if(b>0)
        {
            pq.push(b);
        }
        if(c>0)
        {
            pq.push(c);
        }

        int ans=0;
        while(pq.size()>1)
        {
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();

            ans++;
            first--;
            second--;
            
            if(first>0)
            {
                pq.push(first);
            }
            if(second>0)
            {
                pq.push(second);
            }
        }

        if(pq.size()>0 && pq.top()%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    return 0;
}