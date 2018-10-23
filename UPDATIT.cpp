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

int BIT[1000000]={0};


void update(int i,int val,int n){
	while(i<=n){
		BIT[i]+=val;
		i+=(i&(-i));
	}
}

int query(int i){
	int sum=0;
	while(i>0){
		sum+=BIT[i];
		i-=(i&(-i));
	}
	return sum;
}

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n=0,u;
		cin>>n>>u;
		memset(BIT,0,sizeof(BIT));
		// int *a
		// for (int i = 1; i <= n; ++i)
		// 	cin>>a[i];
		for (int i = 1; i <= u; ++i){
			int l,r,val;
			cin>>l>>r>>val;
			l++;
			r++;
			update(l,val,n);
			update(r+1,-val,n);
		}
		int q;
		cin>>q;
		while(q--){
			int x;
			cin>>x;
			x++;
			cout<<query(x)<<endl;
		}
	}
	return 0;
}