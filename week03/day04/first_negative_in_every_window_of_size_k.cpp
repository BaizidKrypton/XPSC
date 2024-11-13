#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;

    int l=0;
    int r=0;
    vector<int> ans;
    queue<int> q;
        
    while(r<n)
    {
        if(v[r]<0)
        {
            q.push(v[r]);
        }
            
        if(r-l+1==k)
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(v[l]==q.front())
                {
                    q.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    for(int val:ans)
    {
        cout<<val<<" ";
    }

    return 0;
}
