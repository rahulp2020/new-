#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int * arr=new int[n];
       for(int j=1; j<=n; j++)
       {
       	  cin>>arr[j];
       }
         sort(arr,arr+n);
           int temp=0;
      for(int i=1; i<k; i++)
      {
      	for(int j=i+1; j<=k; j++)
      	{
      		if( arr[i]+arr[j] == k)
      		{
      			temp++;
      		}
      	}
      }
         cout<<temp;

}
