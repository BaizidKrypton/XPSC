#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,l;
        cin>>a>>b>>l;
        set<int> st;

        for(int i=0; i<21; i++)
        {
            int x=pow(a,i);
            if(l%x==0)
            {
                int val=l/x;
                for(int j=0; j<21; j++)
                {
                    int y=pow(b,j);
                    if(val%y==0)
                    {
                        st.insert(val/y);
                    }
                }
            }
        }
        cout<<st.size()<<endl;
    }

    return 0;
}
