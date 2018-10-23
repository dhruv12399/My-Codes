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


template <typename T>
class Graph{
	
	map<T, list<T> > m;	

public: 

	Graph(){}

	void addEdge(T u,T v, bool bidir=true){
		m[u].push_back(v);
		if(bidir)
			m[v].push_back(u);
	}

	void print(){
		for(auto i:m){
			cout<<i.first<<"->";
			for(T entry:i.second)
				cout<<entry<<",";
			cout<<endl;
		}
	}
	bool dfsHelper(T node, map<T,bool> &v,T dest){
		v[node] = true;
		
		for(auto i:m[node]){
			if(i==dest)
				return true;
			if(!v[i])
				dfsHelper(i,v,dest);
		}
		return false;
	}

	bool dfs(T src,T dest){
		map<T,bool> v;
		bool ans= dfsHelper(src,v,dest);
		if(ans)
			return true;
		return false;
	}

	

};

int main(){
	Graph<ll> g;
	int n;
	cin>>n;
	while(n--){
		ll f,e,a,b;
		cin>>f>>e>>a>>b;
		for (int i = 0; i < e; ++i)
		{
			ll x,y;
			cin>>x>>y;
			g.addEdge(y,x+y);
			ll j = x+y;
			ll k = j+x;
			while(k<=f){
				g.addEdge(j,k);
				j+=x;
				k+=x;
			}
		}
		// g.print();
		if(g.dfs(a,b))
			cout<<"It is possible to move the furniture.";
		else
			cout<<"The furniture cannot be moved.";

	}	
	return 0;
}