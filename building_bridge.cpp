#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class cordinates{
            public:
              int x;
              int y;
};
bool compare(cordinates a, cordinates b)
{
    if(a.y==b.y)
    {
        return a.x<b.y;
    }
     return a.y<b.y;
}
int no_of_bridge(cordinates  arr[], int n)
{
    sort(arr,arr+n,compare);
    int dp[n];
     dp[0]=1;
    for(int i=1; i<n; i++)
    {
        dp[i]=1;
        for(int j=0; j<i; j++)
        {
            if(arr[i].x>=arr[j].x)
            {
                int possibleans=dp[j]+1;
                 if(possibleans>dp[i])
                 {
                     dp[i]=possibleans;
                 }
            }
        }
    }
       int ans=INT_MIN;
       for(int i=0; i<n; i++)
       {
           if(ans<dp[i])
           {
               ans=dp[i];
           }
       }
         return ans;
}
int main() {
       //  int n;
      //   cin>>n;
         cordinates arr[]={{6, 2}, {4, 3}, {2, 6}, {1, 5}};
          int n=4;
          cout<<no_of_bridge(arr,n);
         
	return 0;
}