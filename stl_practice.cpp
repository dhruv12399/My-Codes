#include<bits/stdc++.h>
using namespace std;


int main ()
{
  unordered_set<int> myset;

  std::cout << "max_size = " << myset.max_size() << std::endl;
  std::cout << "max_bucket_count = " << myset.max_bucket_count() << std::endl;
  std::cout << "max_load_factor = " << myset.max_load_factor() << std::endl;

  return 0;
}

bool comp(pair<int,string> p1, pair<int,string> p2){
	return p1.second[0]<p2.second[0];
}

// int main(){

	//VECTORS
	/*std::vector<int> v;	
	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(5-i+1);

	}
	std::vector<int>:: iterator it;
	for ( it = v.begin(); it!=v.end(); it++)
	{
		cout<<*it;
	}
	sort(v.begin(),v.end());
	cout<<endl;
	for ( it = v.begin(); it!=v.end(); it++)
		cout<<*it;
	reverse(v.begin(),v.end()-2);
	cout<<endl;
	for ( it = v.begin(); it!=v.end(); it++)
		cout<<*it;
	rotate(v.begin(),v.begin()+2,v.end());
	cout<<endl;
	for ( it = v.begin(); it!=v.end(); it++)
		cout<<*it;
	rotate(v.begin(),v.begin()+1,v.end()-2);
	cout<<endl;
	for ( it = v.begin(); it!=v.end(); it++)
		cout<<*it;
	swap(v[0],v[1]);
	//rotate(v.begin(),v.begin()+2,v.end());
	cout<<endl;
	for ( it = v.begin(); it!=v.end(); it++)
		cout<<*it;*/
	
	//LISTS
	// list<int> l;
	// for (int i = 1; i <= 5; ++i)
	// 	l.push_back(5-i+1);
	// list<int> :: iterator it;
	// for ( it = l.begin(); it != l.end(); ++it)
	// {
	// 	cout<<*it;
	// }

	//PAIR
	/*int ar[5] = {2,4,6,1,3};
	string ar1[5] = {"dhruv", "aryan", "rishabh", "lol", "temp"};
	std::vector<pair<int,string> > v;
	for (int i = 0; i < 5; ++i)
	{
		v.push_back(make_pair(ar[i],ar1[i]));
	}
	std::vector<pair<int,string> >:: iterator it;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i].first<<" : "<<v[i].second<<endl;
	}

	sort(v.begin(),v.end(),comp);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i].first<<" : "<<v[i].second<<endl;
	}*/

	//SET
// 	set<int> s;
// 	int ar[13] = {1,1,2,3,4,4,4,5,6,7,7,7,7};
// 	for(int i=0;i<13;++i){
// 		s.insert(ar[i]);
// 	}
	
// 	set<int>:: iterator it;
// 	//set<int> :: iterator t;
// 	for (it=s.begin(); it!= s.end(); ++it)
// 	{
// 		cout<<*it<<" ";	
// 	}
// 	for (it=s.begin(); it!= s.end(); ++it)
// 	{
// 		s.erase(it);	
// 	}
// 	cout<<endl;
// 	cout<<s.empty();
// }


