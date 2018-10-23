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
// #define mod 1000000007
#define S(x) scanf("%lld",&x)
#define S2(x,y) scanf("%lld%lld",&x,&y)
#define P(x) printf("%lld",x)
#define all(v) v.begin(),v.end()

ll mod = (ll) 1e9 + 7;
ll maximaum = INT_MIN;
ll minimaum = INT_MAX;

ll rec(ll *a,int n,int k){
	if(n<=0)
		return 0;
	if(n==minimaum)
		return 1;
	ll retval=0;
	for (int i = 0; i < k; ++i)
	{
		if(n==a[i])
			retval++;
	}
	for (int i = 0; i < k; ++i)
	{
		retval = (retval + rec(a,n-a[i],k) )% mod;
	}
	return retval % mod;
}

vector< vector<ll> > multiply(vector< vector<ll> > a, vector< vector<ll> > b , int k){
	std::vector<vector<ll> > c(a.size(),vector<ll>(b[0].size(),0));
	for (int i = 0; i < a.size(); ++i){
		for(int j=0;j<a[i].size();++j){
			for(int l=0;l<a[i].size();l++){
				c[i][j]=(c[i][j]+(a[i][l]%mod*b[l][j]%mod))%mod;
			}
		}
	}
	return c;
}

vector< vector<ll> > power(vector<vector<ll> > a, ll n,int k){

	vector< vector<ll> > ans(k,vector<ll>(k,0));
	for(int i=0;i<k;i++)
        ans[i][i]=1;
	while(n>0){
		if(n&1)
			ans = multiply(ans,a,k);
		a=multiply(a,a,k);
		n/=2;
	}
	return ans;
}

vector < vector<ll> > build_transformation_matrix(ll *a,int mx,int k)
{
	vector < vector<ll> >m(mx,vector<ll>(mx,0));
	for (int i = 0; i < k; ++i)
	{
			m[a[i]-1][0]=1;
	}
	for (int i = 0; i < mx-1; ++i)
	{
			m[i][i+1]=1;
	}
	return m;
}

vector < vector<ll> > build_base_matrix(ll *a,int maximum,int k)
{
	vector < vector<ll> >base(1,vector<ll>(maximum,0));
	// vector <ll> base(maximum);
	for(int i=0;i<maximum;++i){
			// base[a[i]-1]=1;
		base[0][i] = rec(a,maximum-i,k);
	}
	return base;
}

void solve(ll n,ll k, ll *a,int maximaum){
	ll l;
		// cin>>n;
		// cin>>k;
		// int maximaum = INT_MIN;
		// int minimaum = INT_MAX;
		// ll *a = new ll[k];
		// for(int i=0;i<k;++i){
		// 	cin>>a[i];
		// 	if(a[i]>maximaum)
		// 		maximaum = a[i];
		// 	if(a[i]<minimaum)
		// 		minimaum = a[i];
		// }
		// cout<<rec(a,n,k)<<endl;
		vector < vector<ll> > base;
        base = build_base_matrix(a,maximaum,k);
        // for (int i = 0; i < maximaum; ++i)
        // {
        // 	cout<<base[0][i]<<" ";
        // }
        // cout<<endl<<endl;
        vector<vector<ll> > tm = build_transformation_matrix(a,maximaum,k);
        // for (int i = 0; i < maximaum; ++i)
        // {
        // 	for (int j = 0; j < maximaum; ++j)
        // 	{
        // 		cout<<tm[i][bj]<<" ";
        // 	}
        // 	cout<<endl;
        // }
        tm=power(tm,n- maximaum,maximaum);
        // cout<<endl;
        // for (int i = 0; i < maximaum; ++i)
        // {
        // 	for (int j = 0; j < maximaum; ++j)
        // 	{
        // 		cout<<tm[i][j]<<" ";
        // 	}
        // 	cout<<endl;
        // }

        ll ans=0;
        // for (int i = 0; i < maximaum; ++i)
        // {

        //     // debug(ans);
        //     ans+=((base[0][i]%mod)*(tm[i][0])%mod)%mod;
        //     ans%=mod;
        // }
        vector< vector<ll> > final_ans = multiply(base,tm,0);
        cout<<final_ans[0][0]<<endl;
        // cout<<ans<<endl;
        // cout<<rec(a,n,k) % mod<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n;
		cin>>k;
		ll *a = new ll[k];
		for(int i=0;i<k;++i){
			cin>>a[i];
			if(a[i]>maximaum)
				maximaum = a[i];
			if(a[i]<minimaum)
				minimaum = a[i];
		}
		if(n>15)
			solve(n,k,a,maximaum);
		else
			cout<<rec(a,n,k)<<endl;

	}
	
	return 0;
}

