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
#define P(x) printf("%lld",x)
#define all(v) v.begin(),v.end()

ll check(ll mid,ll n,pair<ll,pii> p[],ll m){
	ll maxCandy=-1;
	for (ll i = 0; i < n; ++i)
	{
		// if(p[i].ff>mid){
		// 	float x = (p[i].ff-mid)/(float)p[i].ss.ss;
		// 	// debug(x);
		// 	m = m-(ceil(x));
		// 	// debug(m);	

		// }
		ll balloon = p[i].ss.ff - (mid/p[i].ss.ss);
		if(balloon>0)
			m = m-balloon;
		maxCandy = max(maxCandy,max((ll)0,(p[i].ss.ff - balloon)*p[i].ss.ss));

	}
	if(m<0)
		return -1;
	return maxCandy;
}

ll bin(ll n,pair<ll,pii> p[],ll m){
	ll lo=0,hi=p[n-1].ff,ans=LLONG_MAX;
	while(lo<=hi){
		ll mid = (lo+hi)/2;
		// debug(mid);
		// debug(ans);
		// cout<<endl;
		ll qw = check(mid,n,p,m);
		if(qw!=-1){
			ans = min(ans,qw);
			hi=mid-1;
		}
		else
			lo=mid+1;
	}
	return ans;
}

int main(){
	
	ll n,m;
	cin>>n>>m;
	pair<ll,pii> p[n+5];
	for (ll i = 0; i < n; ++i)
		cin>>p[i].ss.ff;
	for (ll i = 0; i < n; ++i)
	{
		cin>>p[i].ss.ss;
		p[i].ff = p[i].ss.ff*p[i].ss.ss;
	}
	sort(p,p+n);
	cout<<bin(n,p,m)<<endl;
	return 0;
}