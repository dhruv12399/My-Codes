#include <bits/stdc++.h>
#include<stdio.h>
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
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%d\n",x)
#define all(v) v.begin(),v.end()

ll modularinverse(ll a,ll b, ll n){
	ll ans=1;
	while(b>0){
		if(b&1)
			ans=ans*a;
		a=a*a;
		a%=n;
		ans%=n;
		b/=2;
	}
	return ans;
}

ll CRT(vector<ll> num, vector<ll> rem){
	ll prod=1;
	vector<ll> pp(num.size());
	for (ll i = 0; i < num.size(); ++i)
	{
		prod*=num[i];
	}
	for (int i = 0; i < num.size(); ++i)
	{
		pp[i]=prod/num[i];
	}
	
	vector<ll> inv(num.size());
	for (int i = 0; i < num.size(); ++i)
	{
		inv[i]=modularinverse(pp[i],num[i]-2,num[i]);
	}
	
	ll ans=0;
	for (int i = 0; i < num.size(); ++i)
	{
		ans+= rem[i]*pp[i]*inv[i];
		ans%=prod;
	}
	return ans;
}

int main(){

	std::ios::sync_with_stdio(false);

	ll n;
	scanf("%lld",&n);
	vector<ll> num;
	ll p1 = 186583;
	ll p2 = 587117;  
	ll p = p1*p2;
	num.pb(186583);
	num.pb(587117);
	ll f1=1, f2=1,a1=1, a2=1;
	for (ll i = 2; i <= n; ++i)
	{
		f1*=i;
		f1%=p1;
		f2*=i;
		f2%=p2;

		a1*=f1;
		a1%=p1;
		a2*=f2;
		a2%=p2;
	}
	// debug(a1);
	// debug(a2);

	vector<ll> rem;
	rem.pb(a1);
	rem.pb(a2);
	cout<<CRT(num,rem)%p;
	return 0;
}