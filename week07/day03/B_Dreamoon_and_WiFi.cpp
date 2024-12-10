#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int p_s1=0;
    int p_s2=0;
    int un=0;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+')
        {
            p_s1++;
        }
        if(s2[i]=='+')
        {
            p_s2++;
        }
        if(s2[i]=='?')
        {
            un++;
        }
    }

    int cnt=0;

    for(int i=0; i<(1<<un); i++)
    {
        if(__builtin_popcount(i)+p_s2==p_s1)
        {
            cnt++;
        }
    }

    double ans=(double)cnt/(1<<un);
    cout<<fixed<<setprecision(12)<<ans<<endl;

    return 0;
}