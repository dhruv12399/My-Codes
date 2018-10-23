#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		char m[1000000],n[1000000];
		// cin>>m;
		// cin>>n;
		scanf("%s%s",&m,&n);
		// vector<vector<int> > dp1(strlen(m)+5,vector<int> (3,0));
		// vector<vector<int> > dp2(3,vector<int> (strlen(n)+5,0));
		
		int dp1[3][strlen(m)+2];
		int dp2[strlen(n)+2][3];
		memset(dp1,0,sizeof(dp1));
		memset(dp2,0,sizeof(dp2));

		for (int i = 1; i <= strlen(m); ++i)
		{
			dp1[0][i]=m[i-1]-48;
			if(dp1[0][i]==0)
				dp1[1][i]=1;
		}
		dp1[1][0] = n[0]-48;
		dp1[2][0] = n[1]-48;
		for (int i = 1; i <= strlen(n); ++i)
		{
			dp2[i][0]=n[i-1]-48;
			if(dp2[i][0]==0)
				dp2[i][1]=1;
		}
		dp2[0][1] = m[0]-48;
		dp2[0][2] = m[1]-48;

		for (int j = 1; j <= strlen(m); ++j)
		{
			if(dp1[1][j]==0){
				if(dp1[0][j]==0 || dp1[1][j-1]==0)
					dp1[1][j]=1;
			}
			if(dp1[2][j]==0){
				if(dp1[1][j]==0 || dp1[2][j-1]==0)
					dp1[2][j]=1;
			}
		}
		for (int i = 1; i <= strlen(n); ++i)
		{
			if(dp2[i][1]==0){
				if(dp2[i-1][1]==0 || dp2[i][0]==0)
					dp2[i][1]=1;
			}
			if(dp2[i][2]==0){
				if(dp2[i-1][2]==0 || dp2[i][1]==0)
					dp2[i][2]=1;
			}
		}
		int q;
		scanf("%d",&q);
		while(q--){
			int x,y;
			scanf("%d%d",&x,&y);
			int l = min(x,y);
			if(x==1){
				cout<<dp1[x][y];
				continue;
			}
			if(y==1){
				cout<<dp2[x][y];
				continue;
			}
			if(x>=y)
				cout<<dp2[x-l+2][y-l+2];
			else
				cout<<dp1[x-l+2][y-l+2];
		}
		cout<<endl;

		// for (int i = 0; i <= 2; ++i)
		// {
		// 	for (int j = 0; j <= strlen(n); ++j)
		// 	{
		// 		cout<<dp2[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// cout<<endl;
		// for (int i = 0; i <= strlen(m); ++i)
		// {
		// 	for (int j = 0; j <= 2; ++j)
		// 	{
		// 		cout<<dp1[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
	}	
	return 0;
}