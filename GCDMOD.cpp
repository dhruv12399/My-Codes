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

ll moduloMultiplication(ll a,ll b,ll m)
{
    ll res = 0;  // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    a %= m;
 
    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % m;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % m;
 
        b >>= 1;  // b = b / 2
    }
 
    return res;
}

ll p(ll a,ll n,ll m){
	ll res=1;
	a = a%m;
	while(n>0){
		if(n&1)
			res = moduloMultiplication(res,a,m);
		n=n>>1;
		a = moduloMultiplication(a,a,m);
	}
	return res;
}

ll gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main(){
	
	ll t;
	cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		ll ans = (p(a,n,mod) + p(b,n,mod))%mod;
		if(a==b){
			ll ans = (p(a,n,mod) + p(b,n,mod))%mod;
			cout<<ans<<endl;
		}
		else{
			ll ans = (p(a,n,a-b) + p(b,n,a-b))%(a-b);
			cout<<gcd(ans,a-b) % mod<<endl;
		}
	}	
	return 0;
}