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

int R,C;
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
void floodfill(char mat[50][50],int i,int j,char ch,char color){

	if(i<0||j<0||i>=R||j>=C)
		return;
	if(mat[i][j]!=ch)
		return;
	mat[i][j] = color;
	for (int k = 0; k < 4; ++k)
		floodfill(mat,i+dx[k],j+dy[k],ch,color);
}

void printmat(char mat[50][50]){
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
			cout<<mat[i][j];
		cout<<endl;
	}
}

int main(){
	
	// int R,C;
	cin>>R>>C;
	char input[50][50];
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin>>input[i][j];
		}
	}
	// printmat(input);
	floodfill(input,1,1,'.','r');
	printmat(input);
	return 0;
}
