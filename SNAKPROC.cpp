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
		int l;
		bool ans = true;
		cin>>l;
		char cc='T';
		for (int i = 0; i < l; ++i)
		{
			char ch;
			cin>>ch;
			if(ch=='.')
				continue;
			else if(ch=='H' && cc=='T'){
				cc = 'H';
				continue;
			}
			else if(ch=='T' && cc=='H'){
				cc='T';
				continue;
			}
			else{
				ans=false;
			}
		}
		if(cc=='H')
			ans = false;
		if(ans)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;
	}
	return 0;
}