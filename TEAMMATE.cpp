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
		map<ll, int> m;
		ll n;
		cin>>n;
		ll a[n+10];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		int dis=0, two=0, three=0, four=0;
        for( i:m)
        {
        	dis++;
        	if(i->second >=2) two++;
        	if(i->second >=3) three++;
        	if(i->second >=4) four++;
        }
        ll c1 = (dis*(dis-1)*(dis-2)*(dis-3))/24;
        ll c2 = (two*(two-1))/2;
        ll c3 = (three*dis);
        ll c4 = four;

        ll ans=0;
        ans += c1;
        ans += c2;
        ans += c3*3;
        ans += c4*6;

        cout<<ans<<endl;


	}	
	return 0;
}