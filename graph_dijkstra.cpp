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
	
	void dijkstraSSSP(T src){
		map<T,int> dist;
		for(auto i:m){
			dist[i.first]=INT_MAX;
		}

		set< pair<int,T> > s;

		dist[src]=0;
		s.insert(make_pair(0,src));

		while(!s.empty()){
			auto p = *(s.begin());
			int nodedist=p.first;
			s.erase(s.begin());
			for(auto i:m[p.second]){
				if(nodedist+i.second < dist[i.first]){
					auto f = s.find(make_pair(dist[i.first],i.first));
					if(f!=s.end())
						s.erase(f);
					dist[i.first]=nodedist+i.second;
					s.insert(make_pair(dist[i.first],i.first));
				}
			}
		}
		for(auto i:dist){
			cout<<i.first<<" is located at dist of "<<i.second<<endl;
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
	Graph<int> g;
	g.addEdge(1,2,1);
	g.addEdge(1,3,4);
	g.addEdge(2,3,1);
	g.addEdge(3,4,2);
	// g.addEdge(2,4);
	g.addEdge(1,4,7);
	// g.addEdge(3,5);
	// g.print();
	g.dijkstraSSSP(1);
	
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