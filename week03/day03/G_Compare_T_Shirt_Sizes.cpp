#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        pair<char,int> p[3];
        p[0]={'S',1};
        p[1]={'M',2};
        p[2]={'L',3};

        int s1_x=count(s1.begin(),s1.end(),'X');
        int s2_x=count(s2.begin(),s2.end(),'X');
        int s1_sz;
        int s2_sz;
        if(s1.back()==p[0].first)
        {
            s1_sz=(p[0].second)-s1_x;
        }
        else if(s1.back()==p[2].first)
        {
            s1_sz=p[2].second+s1_x;
        }
        else
        {
            s1_sz=p[1].second;
        }
        
        if(s2.back()==p[0].first)
        {
            s2_sz=p[0].second-s2_x;
        }
        else if(s2.back()==p[2].first)
        {
            s2_sz=p[2].second+s2_x;
        }
        else
        {
            s2_sz=p[1].second;
        }

        if(s1_sz>s2_sz)
        {
            cout<<">"<<endl;
        }
        else if(s1_sz<s2_sz)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }

    return 0;
}