#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		cout<<maze[i][j]<<" ";
    	}
    	 cout<<endl;
    }

}
