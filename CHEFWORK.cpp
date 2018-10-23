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
	
	int w;
	cin>>w;
	int cost[w+1];
	int type[w+1];
	int min1=INF,min2=INF,min3=INF;
	for (int i = 0; i < w; ++i)
	{
		cin>>cost[i];
	}
	for (int i = 0; i < w; ++i)
	{
		cin>>type[i];
	}
	// sort(cost,cost+w);
	for (int i = 0; i < w; ++i)
	{
		if(type[i]==1){
			if(cost[i]<min1)
				min1=cost[i];
		}

		if(type[i]==2){
			if(cost[i]<min2)
				min2=cost[i];
		}

		if(type[i]==3){
			if(cost[i]<min3)
				min3=cost[i];
		}
	}

	cout<<min(min1+min2,min3);
	return 0;
}