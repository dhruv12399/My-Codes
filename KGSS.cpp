#include <bits/stdc++.h>
using namespace std;


void build(int *a,int *tree,int index,int start,int end){
	if(start==end){
		tree[index]=a[start];
		return;
	}
	int mid=(start+end)/2;
	build(a,tree,2*index,start,mid);
	build(a,tree,2*index+1,mid+1,end);
	tree[index] = 
}

void update(int *a,int *tree,int index,int start,int end,int idx,int inc){

	if(start==end){
		a[idx]=inc;
		tree[index]=inc;
		return;
	}
	int mid = (start+end)/2;
	if(idx>=start && idx<=mid)
		update(a,tree,2*index,start,mid,idx,inc);
	else
		update(a,tree,2*index+1,mid+1,end,idx,inc);

	tree[index] = tree[2*index]+tree[2*index+1];
}

int query(int *a,int *tree,int index,int start,int end,int l,int r){
	if(l>end || r<start)
		return 0;
	if(l<=start && r>=end)
		return tree[index];
	int mid=(start+end)/2;
	int a1 = query(a,tree,2*index,start,mid,l,r);
	int a2 = query(a,tree,2*index+1,mid+1,end,l,r);
	return a1+a2;
}

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	int *tree = new int[4*n+1];
	for (int i = 1; i <= n; ++i)
			cin>>a[i];
	build(a,tree,1,1,n);
	int q;
	cin>>q;
	while(q--){
		char o;
		int x,y;
		cin>>o>>x>>y;
		if(o=='U')
			update();
		else if(o=='Q')
			query();
	}
}