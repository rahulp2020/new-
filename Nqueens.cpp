#include<iostream>
#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int board[11][11];
bool Ispossible(int n, int row, int col)
{
	for(int i=row-1; i>=0; i--)
    	{
	    	if(board[i][col]==1)
	        	{
	        		return false;
	         	}
	    }
	for(int i=row-1, j=col-1; j>=0 && i>=0; i--,j--)
        	{
                   if(board[i][j]==1)
                   {
                   	 return false;
                   }
	        }
    for(int i=row-1, j=col+1; j<n && i>=0; i--,j++)
        	{
                   if(board[i][j]==1)
                   {
                   	 return false;
                   }
	        }
	            return true;
}
void helper(int n, int row)
{
	if(row==n)
	    {
             for(int i=0; i<n; i++)
                 {
                  	for(int j=0; j<n; j++)
                    	{
       		               cout<<board[i][j]<<" ";
                    	}
                 }
                         cout<<endl;
                         return ;
        }
    for(int j=0; j<n; j++)
    {
    	if(Ispossible(n,row,j))
    	{
    		board[row][j]=1;
    		helper(n,row+1);
    		board[row][j]=0;
    	}
    }
      return;


}
void PlaceNqueens(int n)
{
	memset(board,0,11*11);
	helper(n, 0);
}
int main()
{
	int n;
	cin>>n;

	PlaceNqueens(n);

}
