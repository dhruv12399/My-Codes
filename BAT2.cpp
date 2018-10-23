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

vector<int> a;
int dp[105][105][105];

int bat(int i,int pi,int pd,int n){
	if(i>n)
		return 0;
	if(dp[i+5][pi+5][pd+5]!=-1)
	 	return dp[i+5][pi+5][pd+5];
	
	int b = -INF,c=-INF;
	int d = bat(i+1,pi,pd,n);
	if(pi!=-1){
		if(a[i]>a[pi])
			b=bat(i+1,i,pd,n)+1;
	}
	else
		b=bat(i+1,i,pd,n)+1;
	if(pd!=-1){
		if(a[i]<a[pd])
			c=bat(i+1,pi,i,n)+1;
	}
	else
		c=bat(i+1,pi,i,n)+1;
	int ret = max(d,max(b,c));
	dp[i+5][pi+5][pd+5]=ret;
	return ret;
}

int main(){
	ll t;
	cin>>t;

	while(t--){
		memset(dp,-1,sizeof(dp));
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			ll x;
			cin>>x;
			a.pb(x);
		}
		cout<<bat(0,-1,-1,n-1);
		a.clear();
		cout<<endl;

	}	
	return 0;
}