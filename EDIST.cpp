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

int dp[2005][2005];

string a1, b1;

ll f(int ia,int ib){
	if(dp[ia][ib]!=-1)
		return dp[ia][ib];
	if(ia==0)
		return ib;
	if(ib==0)
		return ia;
	ll a = INF;
	ll b = INF;
	ll c = INF;
	ll d = INF;

	if(a1[ia-1]==b1[ib-1]){
		a = f(ia-1,ib-1);
		return a;
	}
		b = 1+f(ia-1,ib);
		c = 1+f(ia,ib-1);
		d = 1+f(ia-1,ib-1);
	return dp[ia][ib]= min(b,min(c,d));
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		cin>>a1>>b1;
		// cout<<a1<<" "<<b1;
		cout<<f(a1.length(),b1.length())<<endl;
	}
	return 0;
}