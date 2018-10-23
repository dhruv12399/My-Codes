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
#define P(x) prllf("%lld",x)
#define all(v) v.begin(),v.end()

// ll countP(ll n, ll k) 
// { 
//   // Table to store results of subproblems 
//   ll dp[n+1][k+1]; 
  
//   // Base cases 
//   for (ll i=0; i<=n; i++) 
//      dp[i][0] = 0; 
//   for (ll i=0; i<=k; i++) 
//      dp[0][k] = 0; 
  
//   // Fill rest of the entries in dp[][] 
//   // in bottom up manner 
//   for (ll i=1; i<=n; i++) 
//      for (ll j=1; j<=i; j++) 
//        if (j == 1 || i == j) 
//           dp[i][j] = 1; 
//        else
//           dp[i][j] = j*dp[i-1][j] + dp[i-1][j-1]; 
  
//   return dp[n][k]; 
// } 

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;
    x = x % p;
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
ll fact(ll n, ll r, ll p){
	ll ans = 1;
    for (ll i=n ; i>r; i--) 
        ans = ans*i%p;
    return ans;
}
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    ll fac[n+1]; 
    fac[0] = 1; 
    ll ans = 1;
    for (ll i=n ; i>max(n-r,r); i--) 
        ans = ans*i%p; 
  
    return (ans* modInverse(fact(min(n-r,r),1,p), p) % p) % p; 
} 

int main(){
	
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll ans=0;
		// for (ll i = 2; i <= k; ++i)
		// {
		// 	ll tba = (countP(k,i)%mod * power(2,i,mod)%mod)%mod;
		// 	// debug(tba);
		// 	tba = (tba%mod * nCrModPFermat(n-i+1,i,mod)%mod)%mod;
		// 	ans  = (ans + tba)%mod;

		// }
		for (ll i = 1; i <= min(n-k+1,k); ++i)
		{
			ll tba = (nCrModPFermat(k-1,i-1,mod)%mod * power(2,i,mod)%mod)%mod;
			// debug(tba);
			tba = (tba%mod * nCrModPFermat(n-k+1,i,mod)%mod)%mod;
			ans  = (ans + tba)%mod;
		}
		// debug(ans);
		// ans = (ans + 2*(n-k+1))%mod;
		cout<<ans<<endl;
	}	
	// cout<<nCrModPFermat(2,2,mod);
	return 0;
}