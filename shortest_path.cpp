#include<iostream>
#include<climits>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class graph{
	map<T,list<T>> adj;

public:
	graph(){

	}
	 void addedge(T u, T v, bool bidr=true)
	 {
	 	adj[u].push_back(v);
	 	if(bidr)
	 	{
	 		adj[v].push_back(u);
	 	}
	 }

	 void shortestpath(T src)
	 {
	 	queue<T> q;
	 	map<T,int> dist;
	 	map<T,T> parent;
	 	for(auto i: adj)
	 	{
	 		T u=i.first;
	 		dist[u]=INT_MAX;
	 	}
	 	 q.push(src);
	 	 dist[src]=0;
	 	 parent[src]=src;
	 	 while(!q.empty())
	 	 {
	 	 	T node=q.front();
	 	 	cout<<node<<" ";
	 	 	q.pop();

	 	 	for(T i: adj[node])
	 	 	{
	 	 		if(dist[i]==INT_MAX)
	 	 		{
	 	 			q.push(i);
	 	 			parent[i]=node;
	 	 			dist[i]=dist[node]+1;
	 	 		}
	 	 	}
	 	 }
	 	    cout<<endl;
	 	   for(auto i: adj)
	 	   {
	 	   	T node=i.first;
	 	   	   cout<<"dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
	 	   	   
	 	   }
	 	    cout<<endl;
	 	   for(auto i: adj)
	 	   {
	 	   	T node=i.first;
	 	   	   cout<<"parent of "<<node<<" is "<<parent[node]<<endl;
	 	   	   
	 	   }
	 }
};
int main()
{
       graph<int> g;
       g.addedge(0,1);
       g.addedge(0,3);
       g.addedge(1,2);
       g.addedge(2,5);
       g.addedge(3,5);
       g.shortestpath(0);

        

}