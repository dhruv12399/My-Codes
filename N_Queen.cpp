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
#define n 4

bool isSafe(bool board[n][n], int l, int i){
	for(int j=0;j<l;++j){
		if(board[j][i])
			return false;
	}
	int k = l;
	for(int j = i;j>=0 && k>=0;j-- ){
		if(board[k][j])
			return false;
		k--;
	}
	int m = l;
	for(int j = i;j<n && m>=0; j++){
		if(board[m][j])
			return false;
		m--;
	}

	return true;

}

int countNQueens(bool board[n][n], int l){
	if(l==n-1)
		return 1;
	int count =0;

	for(int i=0;i<n;++i){;
		bool s = isSafe(board,l,i);
		debug(s);
		if(s){
			board[l][i] = true;
			count+= countNQueens(board,l+1);
			board[l][i] = false;
		}
	}
	debug(count);
	debug(l);
	return count;
}

int main(){
	
	bool board[n][n];
	cout<<countNQueens(board,0);
	return 0;
}