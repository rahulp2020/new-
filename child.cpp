#include <bits/stdc++.h>
using namespace std;
int Angrychild(long long arr[], long long n, long long k)
{
   long long * candies=new long long[n+1];
   sort(arr,arr+n);
     long long unfairness=0;
       long long minunfairness=0;
      for(int i=0; i<k-1; i++)
      {
        unfairness=unfairness+arr[i];
      }
          candies[0]=unfairness;
     for(int i=1; i<n-k; i++)
     {
       unfairness=unfairness-arr[i-1];
       unfairness=unfairness+arr[i+k-2];
         candies[i]=unfairness;
     }
       for(int i=0; i<k; i++)
       {
         minunfairness=minunfairness+(2*i+1-k)*arr[i];
       }
   long long temp=minunfairness;
         for(int i=1; i<n-k; i++)
         {
            temp=temp+(k-1)*arr[i-1]+(k-1)*arr[i+k-1]-2*candies[i];
              if(temp<minunfairness)
              {
                minunfairness=temp;
              }
         }
        delete [] candies;
     return minunfairness;

}
int main()
{
     long long n,k;
     cin>>n>>k;
      long long arr[n+1];
     for(int i=0; i<n; i++)
     {
       cin>>arr[i];
     }
       long long myans=Angrychild(arr,n,k);
        cout<<myans<<endl;
    return 0;
}

