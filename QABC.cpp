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

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n+10], b[n+10], c[n+10];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		
{			cin>>b[i];
			c[i] = b[i]-a[i];
		}
		
		for (int i = 0; i < n-2; ++i)
		{
			ll x = c[i];
			c[i] = c[i]-x;
			c[i+1] = c[i+1]-(2*x);
			c[i+2] = c[i+2]-(3*x);
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<c[i]<<" ";
		}

		// if(ans)
		// 	cout<<"TAK"<<endl;
		// else
		// 	cout<<"NIE"<<endl;
	}	
	return 0;
}