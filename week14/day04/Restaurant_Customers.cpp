#include <bits/stdc++.h>
#define ll long long
using namespace std;

// int solve(){
// 	ll n;
// 	cin >> n;
// 	ll a, b, ans = 0, maxo = 0;
// 	map<ll, ll> m;
// 	for (ll i = 0; i < n; i++)
// 	{
// 		cin >> a >> b;
// 		m[a]++;
// 		m[b]--;
// 	}
// 	for (auto x : m)
// 	{
// 		ans += x.second;
// 		maxo = max(maxo, ans);
// 	}
// 	cout << maxo << endl;
// 	return 0;
// }
int main()
{

	ll n;
	cin>>n;
	map<ll, ll> mp;

	for (int i=0; i<n; i++)
	{
        int a,b;
		cin>>a>>b;
		mp[a]++;
		mp[b]--;
	}

    int ans=0;
    int mx=0;

	for (auto x:mp)
	{
		ans+=x.second;
		mx=max(mx,ans);
	}
    
	cout<<mx<<endl;

	return 0;
}