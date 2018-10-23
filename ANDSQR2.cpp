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

struct node
{
	ll ms,ts,ps,ss;
};

void build(ll *a,node *tree,ll index,ll start,ll end){

	if(start==end){
		tree[index].ms=tree[index].ts=tree[index].ps=tree[index].ss=a[start];
		return;
	}

	ll mid=(start+end)/2;
	build(a,tree,2*index,start,mid);
	build(a,tree,2*index+1,mid+1,end);

	tree[index].ts = tree[2*index].ts+tree[2*index+1].ts;
	tree[index].ps = max(tree[2*index].ps,tree[2*index].ts+tree[2*index+1].ps);
	tree[index].ss = max(tree[2*index+1].ss, tree[2*index+1].ts+tree[2*index].ss);
	tree[index].ms = max(tree[2*index].ss+tree[2*index+1].ps,max(tree[2*index].ms,tree[2*index+1].ms));

}

node merge(node a1,node a2){
	node ret;

	ret.ts = a1.ts+a2.ts;
	ret.ps = max(a1.ps,a1.ts+a2.ps);
	ret.ss = max(a2.ss,a2.ts+a1.ss);
	ret.ms = max(a1.ss+a2.ps, max(a1.ms,a2.ms));

	return ret;	

}

node query(ll *a,node *tree,ll index,ll start,ll end,ll l,ll r){

	node bs;
	bs.ts = bs.ms = bs.ps=bs.ss = INT_MIN;
	if(r<start || l>end)
		return bs;
	if(l<=start && r>=end)
		return tree[index];

	ll mid = (start+end)/2;
	node a1 = query(a,tree,2*index,start,mid,l,r);
	node a2 = query(a,tree,2*index+1,mid+1,end,l,r);
	return merge(a1,a2);

}



int main(){
	std::ios::sync_with_stdio(false);
	ll n;
	S(n);
	ll *a = new ll[n+1];
	node *tree = new node[4*n+1];
	for (int i = 1; i <= n; ++i)
		S(a[i]);
	build(a,tree,1,1,n);
	
	ll m;
	S(m);
	for (int i = 0; i < m; ++i)
	{
		ll x,y;
		S2(x,y);
		cout<<query(a,tree,1,1,n,x,y).ms<<endl;
	}
	return 0;
}