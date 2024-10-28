#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> v;

    for(int i='a'; i<='z'; )
    {
        for(int j=0; j<s.size(); )
        {
            if(i!=s[j])
            {
                if(j==s.size()-1)
                {
                    v.push_back(i);
                    i++;
                }
                j++;
            }
            else
            {
                i++;
                break;
            }
        }
    } 

    sort(v.begin(),v.end());
    if(!v.empty())
    {
        cout<<v[0]<<endl;
    }
    else
    {
        cout<<"None"<<endl;
    }
    

    return 0;
}