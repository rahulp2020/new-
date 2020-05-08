#include<iostream>
#include<algorithm>
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
	   int temp_xor=0;
	   for(int i=0; i<n; i++)
	   {
	   	  temp_xor=temp_xor^arr[i];
	   }

	   int temp=temp_xor;
	   int pos=0;
	   while((temp&1)!=1)
	   {
	   	pos++;
	   	temp=temp>>1;
	   }
	  
	   int mask=1<<pos;
	   int a=0;
	   int b=0;
	   for(int i=0; i<n; i++)
	   {
	   	 if((mask&arr[i])>0)
	   	 {
	   	 	a=a^arr[i];
	   	 }
	   }
	    b=temp_xor^a;
	    cout<<min(a,b)<<" "<<max(a,b);
	      delete [] arr;
}