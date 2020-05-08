#include<iostream> 
#include<list> 
// using adjancancy list 
using namespace std;
class graph{
      int V;
      list<int> * l;
      public:
      	graph(int v)
      	{
      		V=v;
      		l=new list<int>[V];
      	}

      	void AddEdges(int u, int v, bool bidict=true)
      	{
      		l[u].push_back(v);
      		if(bidict)
      		{
      			l[v].push_back(u);
      		}
      	}
      	void print()
      	{
      		for(int i=0; i<V; i++)
      		{
                  cout<<i<<"->";
                  for(int vertax: l[i])
                  {
                  	cout<<vertax<<",";
                  }
                   cout<<endl;
      		}
      	}


};


int main()
{
	graph g(5);
	g.AddEdges(0,1);
	g.AddEdges(0,4);
	g.AddEdges(4,3);
	g.AddEdges(1,4);
	g.AddEdges(1,2);
	g.AddEdges(2,3);
	g.print();
	 return 0;
}