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

int dp[100][100];
int cnt[2][100];
void count(int n,string a){
	if(a[0]=='1'){
		cnt[0][0]=0;
		cnt[1][0]=1;
	}
	else{
		cnt[0][0]=1;
		cnt[1][0]=0;
	}
	for (int i = 1; i < n; ++i)
	{
		if(a[i]=='1'){
			cnt[0][i]=cnt[0][i-1];
			cnt[1][i]=cnt[1][i-1]+1;
		}
		else{
			cnt[0][i]=cnt[0][i-1]+1;
			cnt[1][i]=cnt[1][i-1];
		}
	}
}

/*int rock(int i,int p,string a,int n){
	// if(p<0)
	// 	return -INF;
	if(i>n)
		return 0;
	if(dp[i][p]!=-1)
		return dp[i][p];
	// int b=INT_MIN;
	int d=INT_MIN;
	if(a[i]=='1')
		return dp[i][p]=rock(i+1,p+1,a,n)+1;
	else{

		if(p>0)
			d=rock(i+1,p-1,a,n)+1;
		int c=rock(i+1,0,a,n);
		return dp[i][p]=max(d,c);
	}
	// debug(c);
	// debug(b);
	// debug(d);
	// return max(c,max(b,d));
}*/



int main(){
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		int n;
		cin>>n;
		string a;
		cin>>a;
		// cout<<a<<endl;
		cout<<rock(0,0,a,n-1)<<endl;
		// for (int i = 0; i < 15; ++i)
		// {
		// 	for (int j = 0; j < 15; ++j)
		// 	{
		// 		cout<<dp[i][j]<<"  ";
		// 	}
		// 	cout<<endl;
		// }
	}		
	return 0;
}