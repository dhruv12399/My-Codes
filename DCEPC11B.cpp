#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

ll power(ll a, ll b,ll p){
	ll ans = 1;
	while(b>0){
		if(b&1)
			ans = (ans * a)%p;
		a=(a*a)%p;
		b/=2; 
	}
	return ans;
}

ll invmodulo(ll x, ll p){
	ll ans = power(x,p-2,p);
	// debug(ans);
	return ans ;
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		ll ans=1;
		if(n>=p)
			cout<<"0"<<endl;
		else{
			for (int i = n+1; i <= p-1; ++i)
			{
				ans=(ans*i)%p;
			}
			ll mod,final;
			mod = invmodulo(ans,p);
			final = (-1*mod+p)%p;
			cout<<final<<endl;
		}
	}
	return 0;
}
