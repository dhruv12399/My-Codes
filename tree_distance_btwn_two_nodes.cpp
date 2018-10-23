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

struct node{
	int data;
	node* left;
	node* right;
	// node(int x){
	// 	data = x;
	// 	left = 0;
	// 	right = 0;
	// // }
};

node* newNode(int key)
{
    node *temp = new node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}

// node* createtree(){

// 	int x;
// 	cin>>x;
// 	if(x == -1)
// 		return NULL;

// 	node* root = new node(x);
// 	root->left = createtree();
// 	root->right = createtree();
// 	return root;
// }

int level(node* root, int k, int lvl){
	if(root==NULL)
		return -1;
	if(root->data == k)
		return lvl;

	int x = level(root->left,k,lvl+1);
	if(x!=-1)
		return x;
	else{
		return level(root->right,k,lvl+1);
	}
}

node* LCA(node* root,int n1,int n2){
	if(root == NULL)
		return NULL;
	if(root->data == n1 || root->data == n2)
		return root;

	node* l = LCA(root->left,n1,n2);
	node* r = LCA(root->right,n1,n2);

	if(l!=NULL && r!=NULL)
		return root;
	else if(l!=NULL)
		return l;
	else if(r!=NULL)
		return r;
	else
		return NULL;
}

int findDistance(node* root, int a1, int a2){
	return level(root,a1,0) + level(root,a2,0) - 2*level(root,LCA(root,a1,a2)->data,0);
}

int main(){
	node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
    cout << "\nDist(4, 6) = " << findDistance(root, 4, 6);
    cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
    cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
    cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
	return 0;
}