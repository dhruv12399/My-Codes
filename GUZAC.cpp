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
		ll n,k,x,op_left=0;
		cin>>n>>k>>x;
		op_left=n-k;
		set<ll> st;
		int a[k];
		ll s=0;
		for (int i = 0; i < k; ++i)
		{
			cin>>a[i];
			st.insert(a[i]);
			s+=a[i];
		}
		sort(a,a+k);
		ll q = a[0]+x;
		while(1){
			if (op_left==0)
				break;
			if(st.find(q)==st.end()){
				s+=q;
				op_left--;
			}
			q--;
		}
		cout<<s<<endl;
	}	
	return 0;
}