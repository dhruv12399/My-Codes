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

int digisum(ll x){
	int ans=0;
	while(x>0){
		ans += (x%10);
		x/=10;
	}
	return ans;
}

int steps[12];

ll f(ll n,ll d,ll i){
	// debug(n);
	if(i>=15){
		return n;
	}
	ll a=INF,b=INF;
	if(n<10){
	
		if(i<steps[n])
			steps[n]=i;
	// debug(n);
	// debug(i);
	// return n;
	}
	int q = digisum(n);
	a = f(q,d,i+1);
	b = f(n+d,d,i+1);
	return min(a,b);
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll n,d;
		cin>>n>>d;
		// memset(steps,-1,sizeof(steps));
		for (int i = 0; i < 10; ++i)
			steps[i]=100;
		// cout<<digisum(n);
		// cout<<f(n,d,0)<<endl;
		f(n,d,0);
		// for (int i = 0; i < 10; ++i)
		// {
		// 	cout<<steps[i]<<" ";
		// }
		// cout<<endl;
		for (int i = 1; i < 10; ++i)
		{
			// cout<<steps[i]<<" ";
			if(steps[i]!=100){
				cout<<i<<" "<<steps[i]<<endl;
				break;
			}
		}
		// cout<<endl;
	}	
	return 0;
}