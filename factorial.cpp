#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX 500021
#define MOD 1000000007
typedef long long ll;

vector<int>* primecheck()
{
    bool isprime[MAX];
     for(int i=2; i<=MAX; i++)
     {
         isprime[i]=true;

     }
      for(int i=2; i*i<=MAX; i++)
      {
          if(isprime[i]==true)
          {
              for(int j=i*i; j<=MAX; j+=i)
              {

                  isprime[j]=false;
              }

          }

      }
         vector<int>* prime=new vector<int>();
         prime->push_back(2);
          for(int i=3; i<=MAX; i+=2)
          {
              if(isprime[i]==true)
              {
                  prime->push_back(i);

              }

          }
          return prime;


}
ll factorial(int n, vector<int>* & prime)
{
    ll result=1;
    for(int i=0; prime->at(i)<=n; i++)
    {
          int k=prime->at(i);
        ll count=0;
        while((n/k)!=0)
        {
            count=(count + (n/k))%MOD;
            k=k*prime->at(i);

        }
        result=(result*((count+1)%MOD))%MOD;

    }
       return result;

}
int main()
{
    vector<int>* prime=primecheck();
     int t;
     cin>>t;
      while(t--)
      {
         int n;
          cin>>n;

          cout<<factorial(n,prime)<<endl;

      }

}
