#include <iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int>* getpath(int ** edges, int V, int sv, int ev)
{
      bool * visited=new bool[V];
      for(int i=0; i<V; i++)
      {
        visited[i]=false;
      }
  queue<int> q;
  q.push(sv);
   visited[sv]=true;
   bool complete=false;
  unordered_map<int , int> store;
  while(!q.empty() && !complete)
  {
       int vertex=q.front();
           q.pop();
      for(int i=0; i<V; i++)
      {
        if(edges[vertex][i] && !visited[i])
        {
          store[i]=vertex;
          q.push(i);
          visited[i]=true;
            if(i==ev)
            {
              complete=true;
               break ;
            }
        }
      }

  }
       if(!complete)
       {
         return NULL;
       }
    else
    {
        vector<int>* output=new vector<int>();
           int current=ev;
            output->push_back(ev);
         while(current!=sv)
         {
            current=store[current];
            output->push_back(current);
         }
        return output;
    }
       delete [] visited;
}

int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
  //   cin>>V>>E;
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
       cin>>tempX>>tempY;
        edges[tempX][tempY]=1;
        edges[tempY][tempX]=1;
     }
           int sv,ev;
          cin>>sv>>ev;
           vector<int> * output=getpath(edges,V,sv,ev);
            if(output!=NULL)
            {
                 for(int i=0; i<output->size(); i++)
                        {
                             cout<<output->at(i)<<" ";
                         }
                 delete [] output;
            }
               for(int i=0; i<V; i++)
               {
                 delete [] edges[i];
               }
         delete [] edges;


  return 0;
}

