#include <iostream>

using namespace std;
int fib1(int n)
{
	int *arr=new int(n+1);
	arr[0]=0;
	arr[1]=1;
	for(int i=2; i<=n; i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	  int output=arr[n];
	  delete []arr;
	  return output;
	

}

int main()
{
	int n;
	cin>>n;
    cout<<fib1(n)<<endl;
      return 0;
}