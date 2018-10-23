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
int dp[6005][6005];

int f(int i,int j){
	if(dp[i][j]!=-1)
		return dp[i][j];

	if(i>j)
		return 0;
	
	if(s[i]==s[j-1])
		return f(i+1,j-1);

	int a = 1 + f(i+1,j);
	int b = 1 + f(i,j-1);

	return dp[i][j] = min(a,b);
}

int main(){

	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		cin>>s;
		cout<<f(0,s.length())<<endl;
	}
	
	return 0;
}