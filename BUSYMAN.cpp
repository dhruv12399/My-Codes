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
bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
	return p1.second<p2.second;
}
int main(){
	ll t;
	S(t);
	while(t--){
		ll N;
		S(N);
		vector<pair<ll,ll> > acts;
		for (int i = 0; i < N; ++i)
		{
			ll n,m;
			S2(n,m);
			acts.pb(mp(n,m));
		}
		sort(all(acts),comp);
		// debug(acts[0].second);
		// debug(acts[2].first);
		ll ans=1;
		ll st = acts[0].second;
		for (ll i=1;i<acts.size();++i)
		{
			if(acts[i].first>=st){
				ans++;
				st=acts[i].second;
			}
		}
		P(ans);
		printf("\n");
	}	
	return 0;
}