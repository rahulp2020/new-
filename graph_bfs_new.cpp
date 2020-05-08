#include <iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class graph{
     map<T,list<T>> adj;

 public:
 	graph()
 	{

 	}
 	 void AddEdges(T u, T v, bool bidir=true)
 	 {
 	 	adj[u].push_back(v);
 	 	if(bidir)
 	 	{
 	 		adj[v].push_back(u);
 	 	}
 	 }
 	  void print()
 	  {
 	  	for(auto i: adj)
 	  	{
 	  		cout<<i.first<<"->";
 	  		for(T entry: i.second)
 	  		{
 	  			cout<<entry<<",";
 	  		}
 	  		cout<<endl;
 	  	}
 	  }
 	  void bfs(T src)
 	  {
 	  	map<T,bool> visited;
 	  	queue<T> q;
 	  	q.push(src);
 	  	visited[src]=true;
 	  	while(!q.empty())
 	  	{
 	  		T node=q.front();
 	  		cout<<node<<",";
 	  		q.pop();
 	  		for(T child: adj[node])
 	  		{
 	  			if(visited[child]==false)
 	  			{
 	  				q.push(child);
 	  				visited[child]=true;
 	  			}
 	  		}
 	  	}

 	  }
};
int main()
{
	graph<int> g;
	g.AddEdges(0,1);
	g.AddEdges(1,2);
	g.AddEdges(0,4);
	g.AddEdges(2,4);
	g.AddEdges(2,3);
	g.AddEdges(3,5);
	g.AddEdges(3,4);
	 g.bfs(0);
	 return 0;
}
   // well running code