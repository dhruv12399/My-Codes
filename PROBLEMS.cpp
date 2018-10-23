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

int main(){
	
	ll p,s;
	S2(p,s);	
	vector< vector<pii> > prob(p, vector<pii>(s)) ;
	vector<pii> diff(p);
	for (ll i = 0; i < p; ++i)
	{
		for (ll j = 0; j < s; ++j)
			cin>>prob[i][j].ff;
		for (ll j = 0; j < s; ++j)
			cin>>prob[i][j].ss;
		sort(prob[i].begin(),prob[i].end());
		int n=0;
		for (int j = 0; j < s-1; ++j)
		{
			if(prob[i][j].ss > prob[i][j+1].ss)
				n++;
		}
		// debug(n);
		diff[i].ff=n;
		diff[i].ss=i+1;
	}
	sort(diff.begin(),diff.end());
	for (int i = 0; i < p; ++i)
	{
		cout<<diff[i].ss<<endl;
	}

	// for (ll i = 0; i < p; ++i)
	// {
	// 	for (ll j = 0; j < s; ++j)
	// 		cout<<prob[i][j].ff<<" ";
	// 	cout<<endl;
	// 	for (ll j = 0; j < s; ++j)
	// 		cout<<prob[i][j].ss<<" ";
	// 	cout<<endl;
	// }
	return 0;
}