#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<climits>
#include<set>
using namespace std;

template <typename T>
class Graph{
	
	map<T, list<pair<T,int> > > m;	

public: 

	Graph(){}

	void addEdge(T u,T v, int w,bool bidir=true){
		m[u].push_back(make_pair(v,w));
		if(bidir)
			m[v].push_back(make_pair(u,w));
	}

	void print(){
		for(auto i:m){
			cout<<i.first<<"-->";
			for(auto entry:i.second)
				cout<<"("<<entry.first<<","<<entry.second<<")";
			cout<<endl;
		}
	}
	
	void bellman_ford(T src){
		map<T,int> dist;

		for(auto i:m){
			dist[i.first]=INT_MAX;
		}
		dist[src]=0;
		
		for(auto i:m){
			T node = i.first;
			for(auto k:m[node]){
				int weight = k.second;
				if(dist[k.first] > dist[node] + weight && dist[node]!=INT_MAX)
					dist[k.first] = dist[node] + weight;
			}
		}

		for(auto i:m){
			T node = i.first;
			for(auto k:m[node]){
				int weight = k.second;
				if(dist[k.first] > dist[node] + weight && dist[node]!=INT_MAX)
					cout<<"-ve weight cycle found!";
			}
		}

		for(auto i:m){
			cout<<"distance of "<<i.first<<" from "<<src<<" is "<<dist[i.first]<<endl;
		}
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
	/*Graph<int> g;
	g.addEdge(0,1,-1,false);
	g.addEdge(0,2,4,false);
	g.addEdge(1,2,3,false);
	g.addEdge(1,3,2,false);
	g.addEdge(3,2,5,false);
	g.addEdge(1,4,2,false);
	g.addEdge(3,1,1,false);
	g.addEdge(4,3,-3,false);
	g.print();
	g.bellman_ford(0);
	*/// g.dijkstraSSSP(1);
	Graph<int> g;
	g.addEdge(0,1,1,false);
	g.addEdge(1,2,-1,false);
	g.addEdge(2,3,2,false);
	g.addEdge(3,0,-1,false);
	g.bellman_ford(0);

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

	// cout<<g.isCyclicDFS();

	return 0;
}