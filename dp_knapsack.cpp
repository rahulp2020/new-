#include <iostream>
using namespace std;
int itretive_dp(int * value, int * weigth, int n, int w)
{
    int ** dp=new int*[n+1];
    for(int i=0; i<=n; i++)
    {
        dp[i]=new int[w+1];
    }
      for(int i=0; i<=n; i++)
      {
          dp[i][0]=0;
      }
       for(int j=0; j<=w; j++)
      {
          dp[0][j]=0;
      }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=w; j++)
            {
                dp[i][j]=dp[i-1][j];
                if(weigth[i-1]<=w)
                {
                    dp[i][j]=max(value[i-1]+dp[i-1][j-weigth[i-1]],dp[i][j] );
                }
            }
        }
            int ans=dp[n][w];
           for(int k=0; k<=n; k++)
           {
               delete [] dp[k];
           }
            delete [] dp;
            return ans; 
}
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
	        int ans2=itretive_dp(value,weigth,n,w);
	          cout<<ans<<endl;
	          cout<<ans1<<endl;
	           cout<<ans2<<endl;
	     
	return 0;
}
