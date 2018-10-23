#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<climits>
using namespace std;

template <typename T>
class Graph{
	
	map<T, list<T> > m;	

public: 

	Graph(){}

	void addEdge(T u,T v, bool bidir=true){
		m[u].push_back(v);
		if(bidir)
			m[v].push_back(u);
	}

	void print(){
		for(auto i:m){
			cout<<i.first<<"->";
			for(T entry:i.second)
				cout<<entry<<",";
			cout<<endl;
		}
	}
	void dfsHelper(T node, map<T,bool> &v){
		v[node] = true;
		cout<<node<<" ";
		for(auto i:m[node]){
			if(!v[i])
				dfsHelper(i,v);
		}
	}

	void dfs(T src){
		map<T,bool> v;
		dfsHelper(src,v);
		int comp=1;
		for(auto i:m){
			T city=i.first;
			if(!v[city]){
				cout<<endl;
				dfsHelper(city,v);
				comp++;
			}
		}
		cout<<endl<<"the graph had "<<comp<<" components";
		
	}

	

};

int main(){
	/*Graph<string> g;
	g.addEdge("putin","modi",false);
	g.addEdge("putin","trump",false);
	g.addEdge("putin","pope",false);
	g.addEdge("trump","modi",true);
	g.addEdge("yogi","modi",true);
	g.addEdge("yogi","prabhu",false);
	g.addEdge("prabhu","modi",false);
	g.sssp("putin");
*/
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(3,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(6,7);
	g.addEdge(8,9);

	g.dfs(0);

	return 0;
}