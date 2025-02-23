#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;

    set<int> st;
    int ans;
    int x=y+1;
    while(1)
    {
        int tmp=x;
        st.insert(tmp%10);
        tmp/=10;
        st.insert(tmp%10);
        tmp/=10;
        st.insert(tmp%10);
        tmp/=10;
        st.insert(tmp%10);
        tmp/=10;

        if(st.size()==4)
        {
            ans=x;
            break;
        }
        st.clear();
        x++;
    }

    cout<<ans<<endl;

    return 0;
}