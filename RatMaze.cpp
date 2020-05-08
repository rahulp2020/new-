#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printsolution(int** solution, int n)
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
		{
			cout<<solution[i][j]<<" ";
		}

	}
	    cout<<endl;


}
void helper(int maze[][20], int** solution, int n, int x,int y)
{
	 if(x==n-1 && y==n-1)
	 {
	 	solution[x][y]=1;
	 	printsolution(solution,n);
	 	solution[x][y]=0;
	 	return;
	 }
	if(x<0 || y<0 || x>=n || y>=n || maze[x][y]==0 || solution[x][y]==1)
	{
		return ;
	}
	solution[x][y]=1;
	helper(maze,solution,n,x-1,y);
	helper(maze,solution,n,x+1,y);
	helper(maze,solution,n,x,y-1);
	helper(maze,solution,n,x,y+1);
	solution[x][y]=0;


}
void RatInAMaze(int maze[][20], int n)
{
	int** solution=new int*[n];
	for(int i=0; i<n; i++)
	{
		solution[i]=new int[n];
	}
	   for(int i=0; i<n; i++)
       {
           for(int j=0; j<n ; j++)
           {
               solution[i][j]=0;

           }

       }
	  helper(maze,solution,n,0,0);
}
int main()
{
    int n;
    cin>>n;
    int maze[n][20];
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		cin>>maze[i][j];
    	}
    }
    RatInAMaze(maze,n);
   return 0;
}
