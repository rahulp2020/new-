#include<istream>
#include<math.h>
using namespace std;
int main()
{
	int n=9;
	int arr[]={5,4,-8,7,-3,6,-3,5,-6};

	int * dp=new int[n];
	dp[0]=arr[0];
	for(int i=0; i<n; i++)
	{
		dp[i+1]+=dp[i];
		if(dp[i+1]<dp[i])
		{
			dp[i+1]=dp[i];

		}
		  int ans=0;                   // jay kanade's solution keep running in array with sum and at every step update index 
		   int sum=0;
		   for(int i=0; i<n; i++)
		   {
		   	sum+=arr[i];
		   	ans=max(ans , sum);
		   	if(sum<0)
		   	{
		   		sum=0;
		   	}
		   }

		   
	}
	     cout<<ans;
	    cout<<dp[i+1];
	    delete dp[];
}


