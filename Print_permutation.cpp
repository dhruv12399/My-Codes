#include <bits/stdc++.h>
#include<stdio.h>
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
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%d\n",x)
#define all(v) v.begin(),v.end()

void permute(char *a,int i,set<string> s){
	if(a[i]=='\0'){

		// cout<<a<<endl;
		string ab = a;
		// cout<<ab<<endl;
		s.insert(ab);
		return;
	}
	for (int j=i;a[j]!='\0'; ++j)
	{
		swap(a[i],a[j]);
		permute(a,i+1,s);
		swap(a[j],a[i]);
	}
}
int main(){
		
	char a[5];
	cin>>a;
	set<string> s;
	permute(a,0,s);
	for(set<string>::iterator st = s.begin();st!=s.end();st++){
		string l = *st;
		cout<<l<<endl;
	}
	return 0;
}