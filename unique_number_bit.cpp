#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int * arr=new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	   int unique_num=0;
	   for(int i=0; i<n; i++)
	   {
	   	  unique_num=unique_num^arr[i];
	   }
	    delete [] arr;
	     cout<<unique_num;
}