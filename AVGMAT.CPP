#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define F(i,a,b) for(ll i = a; i <= b; i++)
#define RF(i,a,b) for(ll i = a; i >= b; i--)
#define pii pair<int,int>
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

inline ll mand(pii p1, pii p2){
	return abs(p1.ff-p2.ff) + abs(p1.ss-p2.ss);
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+m];
		memset(a,0,sizeof(a));
		// vector<pii> myset;
		memset(data,0,sizeof(data));
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin>>s;
			for (int j = 0; j < m; ++j)
			{
				if(s[j]-48==1) data[i][j]=1;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(data[i][j]==1){
					for (int k = 1; k < 150; ++k)
					{
						if(i-k>=0){
							
						}
					}
				}
			}
		}
	// 	for (int i = 1; i < n+m-1; ++i)
	// 		cout<<a[i]<<" ";
	}	
	return 0;
}