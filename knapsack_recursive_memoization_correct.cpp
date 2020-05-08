#include <iostream>
using namespace std;
int recursive_knapsack(int * value, int * weigth, int n, int w)
{
      if(n==0 || w==0)
      {
          return 0;
      }
      
      if(weigth[n-1]<=w)
      {
          return max((value[n-1]+recursive_knapsack(value,weigth, n-1, w-weigth[n-1])), recursive_knapsack(value,weigth,n-1,w));
      }
        else 
        {
            return recursive_knapsack(value,weigth,n-1,w);
        }
      
}
int recursive_knapsack_memoization(int * value, int * weigth, int n, int w, int ** dp)
{
      if(n==0 || w==0)
      {
          return 0;
      }
        if(dp[n-1][w-1]>-1)
        {
            return dp[n-1][w-1];
        }
      
      if(weigth[n-1]<=w)
      {
          dp[n-1][w-1]= max((value[n-1]+recursive_knapsack_memoization(value,weigth, n-1, w-weigth[n-1], dp)), recursive_knapsack_memoization(value,weigth,n-1,w, dp));
      }
        else 
        {
            dp[n-1][w-1]= recursive_knapsack_memoization(value,weigth,n-1,w,dp);
        }
           return dp[n-1][w-1];
}
int main() {
	// your code goes here
	     int n,w;
	     cin>>n;
	     int * value=new int[n];
	     for(int i=0; i<n; i++)
	     {
	         cin>>value[i];
	     }
	      int * weigth=new int[n];
	      for(int i=0; i<n; i++)
	     {
	         cin>>weigth[i];
	     }
	        cin>>w;
	        int ** dp=new int*[n];
	        for(int i=0; i<n; i++)
	        {
	            dp[i]=new int[w];
	        }
	          for(int i=0; i<n; i++)
	          {
	              for(int j=0; j<w; j++)
	              {
	                  dp[i][j]=-1;
	              }
	          }
	        int ans=recursive_knapsack(value, weigth, n, w);
	        int ans1=recursive_knapsack_memoization(value, weigth, n, w, dp);
	          cout<<ans<<endl;
	          cout<<ans1;
	     
	return 0;
}
