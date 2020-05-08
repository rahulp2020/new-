
#include<bits/stdc++.h>
using namespace std;
  int partsum(int arr[], int start, int end, int mid)
  {
    int i=0, j=mid, k=0;
     int temp[end-start+1];
        int sum=0;
     while(i<mid && j<=end)
     {
       if(arr[i]<arr[j])
       {
         temp[k++]=arr[i++];
         sum+=(end-j+1)*arr[i];
       }
        else
        {
          temp[k++]=arr[j++];
        }
     }
       while(i<mid)
       {
         temp[k++]=arr[i++];
       }
      while(j<=end)
      {
        temp[k++]=arr[j++];
      }
        for(int i=start, k=0; i<=end; k++, i++)
        {
          arr[i]=temp[k];
        }
           return sum;


  }
   int getsum(int arr[], int n, int start, int end)
   {
        int count=0;
      if(end>start)
      {
        int mid=(start+end);
         int sum1=getsum(arr,n,start,mid);
         int sum2=getsum(arr,n,mid+1,end);
         int sum3=partsum(arr,start,end,mid+1);
         return sum1+sum2+sum3;
      }
         return count;
   }
int main() {

	int t;
  cin>>t;
    while(t--)
    {
      int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       {
         cin>>arr[i];
       }
         int ans=getsum(arr,n,0,n-1);
        cout<<ans;
    }
}
