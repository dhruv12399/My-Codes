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
		abc:
		int n,m;
		cin>>n>>m;
		bool inv = false, weak = false;
		for (int i = 0; i < n; ++i)
		{
			char s[100];
			scanf("%s",&s);
			int zero_present = 0;
			char q[m+100];
			scanf("%s",&q);
			for (int j = 0; j < m; ++j)
			{
				if(q[j]=='0')
					zero_present=1;
			}
			if(s[0]=='c' && zero_present == 1)
				inv = true;
			else if(s[0]=='w' && zero_present == 0)
				weak = true;
		}
		if(inv)
			cout<<"INVALID"<<endl;
		else if (weak)			
			cout<<"WEAK"<<endl;
		else
			cout<<"FINE"<<endl;
	}	
	return 0;
}