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


void un2(int *a,int n){
	int res=0;

	for (int i = 0; i < n; ++i)
		res = res^a[i];
	// debug(res);
	int temp = res;
	int i=0;
	while(temp>0){
		if(temp&1)
			break;
		i++;
		temp = temp>>1;
	}
	// debug(i);
	int mask = 1<<i;
	// debug(mask);
	int n1=0,n2=0;
	for (int j = 0; j < n; ++j)
	{
		if(a[j]&mask!=0)
			n1 = n1^a[j];
	}
	// debug(n1);
	n2 = res^n1;
	cout<<min(n1,n2)<<" "<<max(n1,n2);


}

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	un2(a,n);
	return 0;
}