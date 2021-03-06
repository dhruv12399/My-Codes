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

bool check(ll x){
	if(x<4)
		return false;
	if(!(x&1))
		return true;
	return false;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		int ans=0;
		cin>>a[0];
		for (int i = 1; i < n; ++i)
		{
			cin>>a[i];
			for (int j = i-1; j >= 0; --j)
			{
				if(check(a[i]^a[j])){
					ans++;
					cout<<a[i]<<" "<<a[j]<<" "<< (a[i]^a[j]) << endl;
					// debug(ans);
				}
			}
		}
		// debug(ans);
		cout<<ans<<endl;
	}	
	return 0;
}	