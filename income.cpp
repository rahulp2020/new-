#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long getpower(long long a, long long b,int m){
    if(b==0)
    {

        return 1;

    }
     if(b%2==0)
     {
         return getpower((a*a)%m,b/2,m);

     }
       else {
        return ((a%m)*(getpower((a*a)%m,b/2,m)))%m;
       }
}
void multiply(long long A[2][2], long long M[2][2])
{
   long long firstvalue=A[0][0]*M[0][0]+A[0][1]*M[1][0];
   long long secondvalue=A[0][0]*M[0][1]+A[0][1]*M[1][1];
   long long thirdvalue=A[1][0]*M[0][0]+A[1][1]*M[1][0];
   long long forthvalue=A[1][0]*M[0][1]+A[1][1]*M[1][1];
   A[0][0]=firstvalue%m;
   A[0][1]=secondvalue%m;
   A[1][0]=thirdvalue%m;
   A[1][1]=forthvalue%m;

}
 void power(long long A[2][2], long long n)
 {
   if(n==0 || n==1){
     return;
   }
     power(A,n/2);
    multiply(A,A);
      if(n%2!=0)
      {
        long long M[2][2]={{1,1},{1,0}};
         multiply(A,M);
      }


 }
int fib(long long n)
{
    if(n==0)
    {
      return 0;
    }
   long long  A[2][2]={{1,1},{1,0}};
       power(A, n-1);
   long long x=A[0][0]%(m-1);

     return x;
}
long long income(long long a,long long b, long long n)
{
  long long power1=fib(n-1);
  long long power2=fib(n);
  long long ans1=getpower(a,power1,m);
  long long ans2=getpower(b,power2,m);

  long long myans=((ans1%m)*(ans2%m))%m;
    return myans;

}
int main() {

  int t;
  cin>>t;
  while(t--)
  {
    int a,b,n;
    cin>>a>>b>>n;
      cout<<income(a,b,n)-1<<endl;
  }

}
