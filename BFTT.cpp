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
#define INF 2000000333
#define mod 1000000007
#define S(x) scanf("%lld",&x)
#define S2(x,y) scanf("%lld%lld",&x,&y)
#define P(x) printf("%lld",x)
#define all(v) v.begin(),v.end()

int three_counter(ll n){
	ll t = n;
	int ans=0;
	while(t>0){
		int x = t%10;
		if(x==3)
			ans++;
		t/=10;
	}
	return ans;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for (int i = n+1; i < INF; ++i)
		{
			if(three_counter(i)>=3){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}