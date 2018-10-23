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

map<ll,int> m;

int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x
        int res = (x%m + m) % m;
        return res;
    }
}

void f(ll a[], ll b[], ll n){
	for (int i = 0; i < n; ++i)
	{
		ll t;
		t = 4*a[i]*b[i] + 2*max(a[i],b[i]);
		// debug(t);
		m[t]++;
	}
}



int main(){
	
	ll n,q;
	S2(n,q);
	ll a[n],b[n];
	for (int i = 0; i < n; ++i)
		S2(a[i],b[i]);
	f(a,b,n);
	for (int j = 0; j < q; ++j)
	{
		ll x;
		S(x);
		int ans;
		if(m[x*(x+1)]==0)
			ans = -1;
		else
			ans = modInverse(m[x*(x+1)],INF);
		cout<<ans
		<<endl;
	}
	return 0;
}