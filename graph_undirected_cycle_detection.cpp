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

	bool isCyclicBFS(T src){
		map<T,bool> v;
		map<T,T> parent;
		queue<T> q;

		q.push(src);
		parent[src]=src;
		v[src]=true;

		while(!q.empty()){
			T node = q.front();
			q.pop();

			for(auto n:m[node]){
				if(v[n]==true && parent[node]!=n)
					return true;
				else if(!v[n]){
					v[n]=true;
					parent[n]=node;
					q.push(n);
				}
			}
		}
		return false;
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
	// g.addEdge(2,4);
	// g.addEdge(2,3);
	g.addEdge(3,5);
	// g.addEdge(6,7);
	// g.addEdge(8,9);

	/*Graph<string> g;
	g.addEdge("English","Programming Logic",false);
	g.addEdge("Maths","Programming Logic",false);
	g.addEdge("Programming Logic","HTML",false);
	g.addEdge("Programming Logic","Python",false);
	g.addEdge("Programming Logic","Java",false);
	g.addEdge("Programming Logic","JS",false);
	g.addEdge("Python","Web Dev",false);
	g.addEdge("HTML","CSS",false);
	g.addEdge("CSS","JS",false);
	g.addEdge("Java","Web Dev",false);
	g.addEdge("JS","Web Dev",false);
	g.addEdge("Python","Web Dev",false);*/

	cout<<g.isCyclicBFS(0);

	return 0;
}