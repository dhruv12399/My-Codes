#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define F(i,a,b) for(ll i = a; i <= b; i++)
#define RF(i,a,b) for(ll i = a; i >= b; i--)
#define pii pair<ll,ll>
#define PI 3.14159265358979323846264338327950288
#define ll long long
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define debug(x) cout << #x << " = " << x << endl
#define INF 1000000009
#define mod 1000000007
#define S(x) scanf("%lld",&x)
#define S2(x,y) scanf("%lld%lld",&x,&y)
#define P(x) prllf("%lld",x)
#define all(v) v.begin(),v.end()

set<ll> s;

void ps(){
	for (ll i = 0; i < 100000; ++i)
		s.insert(i*i);
}

bool check(ll a[], ll i, ll j){
	ll ans = a[i];
	// debug(ans);
	for (ll k = i; k <= j; ++k){
		// cout<<"ans before: "<<ans<<endl;
		ans = ans & a[k];
		// cout<<"ans after anding with "<<a[k]<<" : "<<ans<<endl;
	}

	// debug(ans);
	// cout<<i<<" "<<j<<" "<<ans<<endl;
	if(s.find(ans)!=s.end())
		return true;
	return false;
}

ll subs(ll a[], ll l, ll r){
	ll ans=0;
	for (ll i = l; i <= r; ++i)
	{
		for (ll j = i; j <= r; ++j)
		{
			if(check(a, i,j))
				ans++;
		}
	}
	return ans;
}

int main(){
	
	ps();
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		ll a[n+5];
		for (ll i = 1; i <= n; ++i)
			cin>>a[i];

		for (ll i = 0; i < q; ++i)
		{
			ll l,r;
			cin>>l>>r;
			cout<<subs(a,l,r)<<endl;
		}
	}	
	return 0;
}