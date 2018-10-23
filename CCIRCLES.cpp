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

// float distance(pair<pii, ll> p1, pair<pii, ll> p2) {
// 	float dist = sqrt((p1.ff.ff - p2.ff.ff) * (p1.ff.ff - p2.ff.ff) + (p1.ff.ss - p2.ff.ss) * (p1.ff.ss - p2.ff.ss));
// 	return dist;
// }

ll ar[1000005];
ll final[1000005];


pair<double,double> typeofcircle(pair<pii, ll> p1, pair<pii, ll> p2)
{
	double dist = sqrt((p1.ff.ff - p2.ff.ff) * (p1.ff.ff - p2.ff.ff) + (p1.ff.ss - p2.ff.ss) * (p1.ff.ss - p2.ff.ss));
	double min = 0, max = 0;
	if (dist >= p1.ss + p2.ss) {
		min = dist - p1.ss - p2.ss;
		max = dist + p1.ss + p2.ss;
	}
	else if (dist <= p1.ss + p2.ss && dist >= abs(p1.ss - p2.ss)) {
		min = 0;
		max = dist + p1.ss + p2.ss;
	}
	else {
		if (p1.ss > p2.ss) {
			min = p1.ss - dist - p2.ss;
		}
		else
			min = p2.ss - dist - p1.ss;
		max = dist + p1.ss + p2.ss;
	}
	return mp(min, max);
}

int main() {

	ll q, n;
	cin >> n >> q;
	pair<pii, ll> c[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> c[i].ff.ff >> c[i].ff.ss >> c[i].ss;
	}
	// ll ar[n * n + 5] ;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{

			pair<double,double> x = typeofcircle(c[i], c[j]);
			ll a = ceil(x.ff);
			// debug(a);
			ar[a]++;
			ll b = floor(x.ss) + 1;
			// debug(b);
			ar[b]--;
		}
	}
	
	// for (int i = 0; i < 1000001; ++i)
	// {
	// 	cout << ar[i] << " ";
	// }
	// ll final[n*n+5];
	final[0] = ar[0];
	for (int i = 1; i < 1000001; ++i)
	{
		final[i] = ar[i] + final[i - 1];
	}
	while (q--) {
		ll k;
		cin >> k;
		cout << final[k] << endl;
	}


	return 0;
}