#include<iostream>
using namespace std;

void multiply(int A[2][2], int M[2][2])
{
   int firstvalue=A[0][0]*M[0][0]+A[0][1]*M[1][0];
   int secondvalue=A[0][0]*M[0][1]+A[0][1]*M[1][1];
   int thirdvalue=A[1][0]*M[0][0]+A[1][1]*M[1][0];
   int forthvalue=A[1][0]*M[0][1]+A[1][1]*M[1][1];
   A[0][0]=firstvalue;
   A[0][1]=secondvalue;
   A[1][0]=thirdvalue;
   A[1][1]=forthvalue;

}
 void power(int A[2][2], unsigned long long n)
 {
   if(n==0 || n==1){
     return;
   }
     power(A,n/2);
    multiply(A,A);
      if(n%2!=0)
      {
        int M[2][2]={{1,1},{1,0}};
         multiply(A,M);
      }


 }
unsigned long long fib(unsigned long long n)
{
    if(n==0)
    {
      return 0;
    }
   int A[2][2]={{1,1},{1,0}};
       power(A, n);
     return A[0][0];
}




unsigned long long fiboSum(unsigned long long m,unsigned long long n)
{
	unsigned long long ans1=fib(n);
    unsigned long long ans2=fib(m+1);
      return (ans2-ans1)%1000000007;
}
int main()
{
   unsigned long long n;
   unsigned long long m;
    cin>>n>>m;
    cout<<fiboSum(m,n);

}
