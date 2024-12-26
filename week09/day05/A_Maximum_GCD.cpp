#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
 
int n; 
 
int main()
{
	int T;
    cin >> T;
 
    while (T--) {
        cin>>n;
        if(n <= 3) cout<<"1\n";
        else cout<<n/2<<endl;
    }
	return 0;
}