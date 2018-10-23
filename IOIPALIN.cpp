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

string s;
ll dp[5005][5005];

ll palin(ll i,ll j){
	if(i>=j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(s[i]==s[j])
		return dp[i][j]=palin(i+1,j-1);
	else{
		ll b=palin(i+1,j)+1;
		ll c=palin(i,j-1)+1;
		return dp[i][j]=min(b,c);
	}
}

int main(){
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;	
	cin>>s;
	cout<<palin(0,n-1);
	return 0;
}