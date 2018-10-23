#include <bits/stdc++.h>
#define ll long long
#define S(x) scanf("%d",&x)
#define debug(x) cout<<#x<<'='<<x<<endl;
using namespace std;
void driver()
{
	ll a[100000];
	ll n,k;
	cin>>n>>k;
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n,greater<ll>());
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	ll ans=0;
	ll x = a[0];
	for(int i=0;i<n;++i)
	{
		if(x==a[i]) 
			ans++;
		else
		{
			// cout<<x<<" "<<a[i]<<endl;
			x=a[i];
			k--;
			if(k==0)
				break;
			ans++;
		}
	}
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		driver();
}