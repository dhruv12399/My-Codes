#include <bits/stdc++.h>
#define ll long long
#define S(x) scanf("%d",&x)
#define debug(x) cout<<#x<<'='<<x<<endl;
using namespace std;
map<int,int> Cstore;
int setbits(int n)
{
	int counter=0;
	while(n)
	{
		if(n&1) counter++;
		n/=2;
	}
	return counter;
}


int c,b1,ans;
void permutate(int num,int w, int bits, int j, int k)
{
	if(j>w || num>=k) return;
	if(bits==0)
	{
	//	cout<<num<<endl;
		if(c-num>=0&& setbits(c-num)==b1){ans++;} 
		return;
	}
	for(int i=j;i<w;++i)
	{
		int t = 1<<i;
		int p = num|t;
		permutate(p, w, bits-1, i+1, k);
	}	
}

int data[32][32][2000]={0};
void driver(int i)
{
	int a,b;
	ans=0;
	cin>>a>>b>>c;
	if(Cstore[c]==0) Cstore[c]=i;
	int rb =0, cc = c;
	while(cc)
	{	
		cc/=2;
		rb++;
	}
	int a1 = setbits(a);
	b1=setbits(b);
	if(data[a1][b1][Cstore[c]]==0)
	{
		permutate(0,rb,a1,0,c);
		data[a1][b1][Cstore[c]] = ans;	
	}
	cout<<data[a1][b1][Cstore[c]]<<endl;

}
int main()
{
	//memset(data,-1,sizeof(data));
	int t;
	cin>>t;
	for(int i=1;i<=t;++i)
		driver(i);
}