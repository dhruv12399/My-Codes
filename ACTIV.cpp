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

bool comp(pii p1,pii p2){
	return p1.ss<p2.ss;
}

int bs(){
	ll lo=,hi=ll_MAX;
	while(lo<=hi){
		if(check())
		}
	}
}

int main(){
	int t;
	while(S(t)){
		vector<pii> v(t);
		ll s,e;
		for (int i = 0; i < t; ++i)
		{
			cin>>v[i].ff>>v[i].ss;
		}
		sort(all(v),comp);
		for (int i = 0; i < t; ++i)
		{
			dp[i]=dp[i-1]+ bs() +1;
		}
	}	
	return 0;
}