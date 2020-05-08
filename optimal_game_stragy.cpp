#include<iostream>
using namespace std;
int helper(int ** dp, int i, int j)
{
    if(i<=j)
    {
        return dp[i][j];
    }
     return 0;
}

int calculate(int * arr, int n)
{
	if(n==1)
	{
		return arr[0];
	}
	if(n==2)
	{
		return max(arr[0],arr[1]);
	}
	 int ** dp=new int*[n];
	 for(int i=0; i<n; i++)
	 {
	 	dp[i]=new int[n];
	 }
	  for(int i=0; i<n; i++)
	  {
	  	for(int j=0; j<n; j++)
	  	{
	  		dp[i][j]=0;
	  	}
	  }
	     for(int gap=0; gap<n; gap++)
	     {
	     	for(int i=0, j=gap; j<n; i++, j++)
	     	{
	     		
	     		  
	     		   
	     		   
	     		   	 int x=arr[i]+min(helper(dp,i+2,j),helper(dp,i+1,j-1));
	     		   	 int y=arr[j]+min(helper(dp,i,j-2),helper(dp,i+1,j-1));
	     		   	 dp[i][j]=max(x,y);
	     		   
	     		    
	     	}
	     }
	         int temp=dp[0][n-1];
	          for(int i=0; i<n; i++)
	          {
	          	delete [] dp[i];
	          }
	            delete [] dp;
	              return temp;
}
int main() {
   int n;
   cin>>n;
   int * arr=new int[n];
    for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	  int ans=calculate(arr,n);
	    cout<<ans;
	  delete [] arr;

	return 0;
}