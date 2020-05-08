#include<iostream>
#include<queue>
using namespace std;
void print(int ** edges, int n, int sv, bool * visited)
{
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<n; i++)
    {
        if(edges[sv][i]==1)
        {
            if(visited[i]==true)
            {
                continue;
            }
             print(edges,n,i,visited);
        }
    }
}
void printBFS(int ** edges, int n, int sv)
{
    queue<int> q ;
    bool * visited=new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
     q.push(sv);
     visited[sv]=true;
     while(!q.empty())
     {
         int curr_vertices=q.front();
         q.pop();
         cout<<curr_vertices<<endl;
        // sv=curr_vertices;
         for(int i=0; i<n; i++)
         {
              if(curr_vertices==i)
              {
                  continue;
              }
             if(edges[curr_vertices][i]==1 && !visited[i])
             {
                 q.push(i);
                 visited[i]=true;
             }
         }
     }
      delete [] visited;
}
int main()
{
    int n,e;
    cin>>n>>e;
    int ** edges=new int*[n];
    for(int i=0; i<n; i++)
    {
        edges[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            edges[i][j]=0;
        }
    }
    
       for(int i=0; i<e; i++)
       {
           int f,s;
           cin>>f>>s;
           edges[f][s]=1;
           edges[s][f]=1;
       }
         
         bool * visited=new bool[n];
          for(int i=0; i<n; i++)
          {
              visited[i]=false;
          }
             cout<<"DFS"<<endl;
           print(edges,n,0,visited);
           cout<<"BFS"<<endl;
           printBFS(edges,n,0);
           for(int k=0; k<n; k++)
           {
               delete [] edges[k];
           }
             delete [] edges; 
              delete [] visited;
              
               
              
}







