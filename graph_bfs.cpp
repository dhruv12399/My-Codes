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
	void bfs(T src){
		queue<T> q;
		map<T,bool> v;
		q.push(src);
		v[src]=true;
		while(!q.empty()){
			T first = q.front();
			cout<<first<<" ";
			q.pop();

			for(T n:m[first]){
				if(!v[n]){
					q.push(n);
					v[n]=true;
				}
			}
		}
	}

	void sssp(T src){
		queue<T> q;
		map<T,int> d;
		map<T,T> p;
		for(auto i:m){
			d[i.first]=INT_MAX;
		}
		q.push(src);
		d[src]=0;
		p[src]=src;
		while(!q.empty()){
			T node = q.front();
			cout<<node<<" ";
			q.pop();

			for(T n:m[node]){
				if(d[n]==INT_MAX){
					q.push(n);
					d[n]=d[node]+1;
					p[n]=node;
				}
			}
		}
		for(auto i:m){
			T node=i.first;
			cout<<"dist of "<<node<<" from "<<src<<" is "<<d[node]<<endl;
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
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.sssp(2);

	return 0;
}