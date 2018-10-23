#include <bits/stdc++.h>
using namespace std;

int lazy[100000] = {0};

void build(int *a,int *tree,int index,int start,int end){
	if(start==end){
		tree[index]=a[start];
		return;
	}
	int mid=(start+end)/2;
	build(a,tree,2*index,start,mid);
	build(a,tree,2*index+1,mid+1,end);
	tree[index] = min(tree[2*index],tree[2*index+1]);
}

void update(int *a,int *tree,int index,int start,int end,int idx,int inc){

	if(start==end){
		a[idx]+=inc;
		tree[index]+=inc;
		return;
	}
	int mid = (start+end)/2;
	if(idx>=start && idx<=mid)
		update(a,tree,2*index,start,mid,idx,inc);
	else
		update(a,tree,2*index+1,mid+1,end,idx,inc);

	tree[index] = min(tree[2*index],tree[2*index+1]);
}

void update_range(int *a,int *tree,int index,int start,int end,int l,int r,int inc){
	if(l>end || r<start)
		return;

	if(start==end){
		tree[index]+=inc;
		a[start]+=inc;
		return;
	}

	int mid=(start+end)/2;
	update_range(a,tree,2*index,start,mid,l,r,inc);
	update_range(a,tree,2*index+1,mid+1,end,l,r,inc);
	tree[index] = min(tree[2*index],tree[2*index+1]);
}

void update_range_lazy(int *a,int *tree,int index,int start,int end,int l,int r,int inc){
	if(lazy[index!=0]){
		tree[index]+=lazy[index];
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
		lazy[index]=0;
	}

	if(l>end || r<start)
		return;

	if(start==end){
		tree[index]+=inc;
		a[start]+=inc;
		return;
	}

	int mid = (start+end)/2;
	update_range_lazy(a,tree,2*index,start,mid,l,r,inc);
	update_range_lazy(a,tree,2*index+1,mid+1,end,l,r,inc);
	tree[index]=min(tree[2*index],tree[2*index+1]);
}

int query_lazy(int *a,int *tree,int index,int start,int end,int l,int r){
	if(lazy[index!=0]){
		tree[index]+=lazy[index];
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
		lazy[index]=0;
	}

	if(l>end || r<start)
		return INT_MAX;
	if(l<=start && r>=end)
		return tree[index];
	int mid=(start+end)/2;
	int a1 = query_lazy(a,tree,2*index,start,mid,l,r);
	int a2 = query_lazy(a,tree,2*index+1,mid+1,end,l,r);
	return min(a1,a2);	

}

int query(int *a,int *tree,int index,int start,int end,int l,int r){
	if(l>end || r<start)
		return INT_MAX;
	if(l<=start && r>=end)
		return tree[index];
	int mid=(start+end)/2;
	int a1 = query(a,tree,2*index,start,mid,l,r);
	int a2 = query(a,tree,2*index+1,mid+1,end,l,r);
	return min(a1,a2);
}

int main(){
	int n;
	cin>>n;
	int *a = new int[n+1];
	int *tree = new int[4*n+1];
	for (int i = 1; i <= n; ++i)
			cin>>a[i];
	build(a,tree,1,1,n);
	
	for (int i = 1; i <= 5; ++i)
	{
		cout<<tree[i]<<" ";
	}
		
	int x=0;
	while(x!=4){
		cout<<"\n1.Query\n2.Update\n3.Update Range\n4.Exit\nEnter option : ";
		cin>>x;
		switch(x){
			case 1: 
				int l,r;
				cout<<"Enter the range : ";
				cin>>l>>r;
				cout<<query(a,tree,1,1,n,l,r)<<endl;
				break;
			case 2:
				int j,idx;
				cout<<"enter index and value : ";
				cin>>idx>>j;
				update(a,tree,1,1,n,idx,j);
				for (int i = 1; i <= n; ++i)
					cout<<a[i]<<" ";
				cout<<endl;
				break;
			case 3:
				int l1,r1,val;
				cout<<"Enter the range and val: ";
				cin>>l1>>r1>>val;
				update_range(a,tree,1,1,n,l1,r1,val);
				for (int i = 1; i <= n; ++i)
					cout<<a[i]<<" ";
				cout<<endl;
				break;
			case 4:
				return 0;
				break;
		}
	}
}