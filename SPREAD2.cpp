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
		ll a[n+500];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll q=n-1;
		ll ans=0;
		ll x = a[0];
		int i=1;
		while(q>0){
			// debug(q);
			// debug(x);
			q = q-x;
			ans++;
			if(q<=0)
				break;
			int x2 = x;
			while(x2--){
				x += a[i];
				i++;
			}
			// cout<<endl;
			// debug(q);
			// debug(x);
			// cout<<endl<<endl;
		}
		cout<<ans<<endl;
		
	}	
	return 0;
}