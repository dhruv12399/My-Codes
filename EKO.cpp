#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

bool check(ll mid,ll a[],ll n,ll m) {
	ll sum=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>mid)
			sum+=a[i]-mid;
	}
	if(sum>=m)
		return 1;
	return 0;


	
}

ll bin(ll m,ll a[],ll n) {
	ll lo = 0, hi = 1000000000000, ans = 0;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		// cout<<lo<<" "<<mid<<" "<<hi<<endl;
		if (check(mid,a,n,m)) {
			ans = mid;
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	return ans;
}


int main()
{
	ll m,n;
	cin>>n>>m;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<bin(m,a,n);
	
	return 0;
}