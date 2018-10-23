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
bool comp1(pii p1,pii p2){
	return p1.ff<p2.ff;
}

bool comp2(pii p1,pii p2){
	return p1.ss<p2.ss;
}

int main(){
	ll t;
	S(t);
	while(t--){
		ll w,h,n;
		scanf("%lld%lld%lld",&w,&h,&n);
		vector<pii> v;
		for (int i = 0; i < n; ++i)
		{
			ll x,y;
			S2(x,y);
			v.pb(mp(x,y));
		}
		sort(all(v),comp1);
		ll mw=-INF,tempw=0;
		for (int i = 1; i < n; ++i)
		{
			tempw=v[i].ff-v[i-1].ff;
			mw=max(mw,tempw);
		}
		sort(all(v),comp2);
		ll mh=-INF,temph=0;
		for (int i = 1; i < n; ++i)
		{
			temph=v[i].ss-v[i-1].ss;
			mh=max(mh,temph);
		}
		if(n!=0)
		cout<<mh*mw;
	}	
	return 0;
}