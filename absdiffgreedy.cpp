// arr - input array
// n - size of array
#include<algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minAbsoluteDiff(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
              sort(arr,arr+n);
       int min=INT_MAX;
       int temp=0;
     for(int i=0; i<n-1; i++)
     {
          temp=arr[i+1]-arr[i];
           if(temp<min)
           {
             min=temp;
           }
     }
     return min;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
      for(int i=0; i<n; i++)
      {
          cin>>arr[i];

      }
    int myans=minAbsoluteDiff(arr,n);
       cout<<myans;
         return 0;

}

