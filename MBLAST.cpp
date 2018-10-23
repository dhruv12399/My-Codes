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

string a1,b1;
int k;

int f(int ia,int ib){
	if(dp[ia][ib]!=-1)
		return dp[ia][ib];
	if(ia==0)
		return k*ib;
	if(ib==0)
		return k*ia;

	if(a1[ia-1]==b1[ib-1])
		return f(ia-1,ib-1);

	ll a = INF;
	ll b = INF;
	ll c = INF;

	a = k + f(ia,ib-1);
	b = k + f(ia-1,ib);
	c = abs(b1[ib-1]-a1[ia-1]) + f(ia-1,ib-1);

	return dp[ia][ib] = min(c,min(a,b));
}

int main(){
	
	memset(dp,-1,sizeof(dp));
	cin>>a1>>b1;
	cin>>k;
	cout<<f(a1.length(),b1.length())<<endl;

	return 0;
}