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
bool comp(pair<string,ll> p1, pair<string,ll> p2){
	return p1.ss<p2.ss;
}
int main(){
	ll t;
	S(t);
	while(t--){
		ll N;
		S(N);
		vector< pair<string,ll> > v;
		for (ll i = 0; i < N; ++i)
		{
			string s;
			ll r;
			cin>>s;
			S(r);
			v.pb(mp(s,r));
		}
		sort(all(v),comp);
		ll ans=0;
		for (int i = 0; i < N ; ++i)
		{
			ans+= abs((i+1)-v[i].ss);
		}
		P(ans);
		printf("\n");
	}	
	return 0;
}