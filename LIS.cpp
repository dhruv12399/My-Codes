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
ll n;
std::vector<int> v;
ll LIS(ll index,ll prev){
	if(index==n+1)
		return 0;
	ll a = LIS(index+1,prev);
	ll b=0;
	if(prev!=-1){
		if(v[index]>v[prev])	
			b=LIS(index+1,index)+1;
	}
	else
		b=LIS(index+1,index)+1;
	
	return max(a,b);
}
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.pb(x);
	}

	cout<<LIS(0,-1);
	return 0;
}