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
	bool isCyclicHelper(T node,map<T,bool> &v,map<T,bool> &instack){
		v[node]=true;
		instack[node]=true;

		for(T n:m[node]){
			if((!v[n] && isCyclicHelper(n,v,instack)) || instack[n])
				return true;
		}
		instack[node]=false;
		return false;
	}

	bool isCyclicDFS(){
		map<T,bool> v;
		map<T,bool> instack;

		for(auto i:m){
			T node=i.first;
			if(!v[node]){
				bool ret= isCyclicHelper(node,v,instack);
				if(ret)
					return true;
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
	g.addEdge(0,1,false);
	g.addEdge(0,2,false);
	// g.addEdge(3,0,false);
	g.addEdge(2,4,false);
	g.addEdge(4,5,false);
	g.addEdge(2,3,false);
	g.addEdge(1,5,false);
	
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

	cout<<g.isCyclicDFS();

	return 0;
}