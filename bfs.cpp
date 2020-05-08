#include <iostream>
#include <queue>
using namespace std;
void print(int ** edges, int V, int sv)
{
     queue <int> gq;
    bool * visited=new bool[V];
    for(int i=0; i<V; i++)
    {
       visited[i]=false;
      
    }
    gq.push(sv);
    visited[sv]=true;
     while(!gq.empty())
     {
       // int currentele=gq.pop();
              int currentele=gq.front();
                 gq.pop();
               cout<<currentele<<" ";
         for(int i=0; i<V; i++)
         {
            if(currentele==i)
            {
              continue;
            }
           if(edges[currentele][i]==1 && visited[i]==false )
           {
              gq.push(i);
              visited[i]=true;
              
           }
         }
     }
         delete [] visited;
     
}

int main() {
    int V, E;
    cin >> V >> E;

       int ** edges=new int*[V];
        for(int i=0; i<V; i++)
        {
            edges[i]=new int[V];
          for(int j=0; j<V; j++)
          {
            edges[i][j]=0;
          }
        }
     for(int i=0; i<E; i++)
     {
        int a,b;
        cin>>a>>b;
        edges[a][b]=1;
        edges[b][a]=1;
     }
        
      print(edges,V,0);
	 
  

  return 0;
}
