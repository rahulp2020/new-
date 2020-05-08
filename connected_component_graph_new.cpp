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
 	  void dfsHelper(T node, map<T,bool> &visited)
 	  {
 	  	visited[node]=true;
 	  	cout<<node<<",";
 	  	// traverse all visited node
 	  	for(T child: adj[node])
 	  	{
 	  		if(!visited[child])
 	  		{
 	  			dfsHelper(child,visited);
 	  		}
 	  	}
 	  }
 	  void dfs(T src)
 	  {
 	  	map<T,bool> visited;
 	  	 int component=1;
 	     dfsHelper(src,visited);
 	  	 cout<<endl;
 	  	 // check any comp is unvisited 
 	  	 for(auto i: adj)
 	  	 {
 	  	 	T city=i.first;
 	  	 	if(!visited[city])
 	  	 	{
 	  	 	  dfsHelper(city,visited);
 	  	 	  component++;
 	  	 	}
 	  	 }
 	  	  cout<<endl;
 	  	  cout<<component;

 	  }
};
int main()
{
	graph<string> g;
	g.AddEdges("amritsar","jaipur");
	g.AddEdges("amritsar","delhi");
	g.AddEdges("delhi","jaipur");
	g.AddEdges("mumbai","jaipur");
	g.AddEdges("mumbai","bhopal");
	g.AddEdges("delhi","bhopal");
	g.AddEdges("mumbai","banglore");
	g.AddEdges("agra","delhi");
	g.AddEdges("andaman","nicobar");
	 g.dfs("amritsar");
	 return 0;
}
   // well running code