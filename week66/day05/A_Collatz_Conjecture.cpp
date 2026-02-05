#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k, x;
        cin>>k>>x;
        
        // Start with the final value and work backwards k steps
        // We need to find ANY valid sequence, so we can choose
        // a simple path: always use the even path backwards
        // (multiply by 2)
        long long result = x;
        for(int i = 0; i < k; i++) {
            // We can always multiply by 2 to get a valid backward step
            result *= 2;
        }
        
        cout << result << endl;
    }
    return 0;
}