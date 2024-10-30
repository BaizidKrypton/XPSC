#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   map<string,string> og,cur;
   for (int i=0; i<n; i++) 
   {
        string a,b;
        cin>>a>>b;
        if (cur.find(a)!=cur.end()) 
        {
            string s=cur[a];
            og[s]=b;
            cur.erase(a);
            cur[b]=s;
        }
        else 
        {
            og[a]=b;
            cur[b]=a;
        }
    }

    cout<<og.size()<<endl;
    for (auto[x, y]:og) 
    {
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}