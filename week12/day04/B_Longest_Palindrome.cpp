#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;

    vector<string> set1;
    vector<string> set2;

    vector<string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    auto reverseString=[](string str) 
    {
        string rev=str;
        reverse(rev.begin(),rev.end());
        return rev;
    };

    for(auto str:v) 
    {
        string revStr=reverseString(str);

        if (find(set1.begin(),set1.end(),str)==set1.end() && find(set1.begin(),set1.end(),revStr)==set1.end()) 
        {
            set1.push_back(str);
        }
        else if(find(set1.begin(),set1.end(),revStr)!=set1.end() && find(set2.begin(),set2.end(),str)==set2.end()) 
        {
            set2.push_back(str);
        }
    }

    string first="";
    string last="";

    for (auto key:set2) 
    {
        string rev=reverseString(key);
        if(find(set1.begin(),set1.end(),rev)!=set1.end())
        {
            first+=key;
            last=rev+last;
        }
    }

    string middle="";
    for (auto key:set1) 
    {
        string rev=reverseString(key);
        if(find(set2.begin(),set2.end(),rev)==set2.end()) 
        {
            if (key==reverseString(key)) 
            {
                middle=key;
                break;
            }
        }
    }

    string ans=first+middle+last;
    cout<<ans.size()<<endl;
    cout<<ans<<endl;

    return 0;
}
