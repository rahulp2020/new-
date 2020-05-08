#include <iostream>
#include<map>
#include<list>

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
};
int main()
{
	 // declare here 
	graph<string> g;
	g.AddEdges("rahul","mehul");
	g.AddEdges("rahul","mehul",false);
	g.AddEdges("rahul","champ");
	g.AddEdges("chotu","rahul",false);
	g.AddEdges("chotu","mehul");
	 g.print();
	 return 0;
}
   // well running code