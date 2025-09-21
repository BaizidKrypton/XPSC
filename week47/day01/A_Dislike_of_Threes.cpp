#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;

        int ans;
        int x=1;
        vector<int> v;
        for(int i=0; i<k; i++)
        {
            if(x%3==0)
            {
                i--;
            }
            else if(x%10==3)
            {
                i--;
            }
            else
            {
                v.push_back(x);
            }
            x++;
        }
        cout<<v.back()<<endl;
    }

    return 0;
}