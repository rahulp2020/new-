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
 void power(int A[2][2], int n)
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
int fib(int n)
{
    if(n==0)
    {
      return 0;
    }
   int A[2][2]={{1,1},{1,0}};
       power(A, n);
     return A[0][0];
}
void multiply1(int A[2][2], int M[2][2])
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
 void power1(int A[2][2], int m)
 {
   if(m==0 || m==1){
     return;
   }
     power1(A,m/2);
    multiply1(A,A);
      if(m%2!=0)
      {
        int M[2][2]={{1,1},{1,0}};
         multiply1(A,M);
      }


 }
int fibo(int m)
{
    if(m==0)
    {
      return 0;
    }
   int A[2][2]={{1,1},{1,0}};
       power1(A, m+1);
     return A[0][0];
}


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n,m;
   cin>>n>>m;
   // int A[2][2]={{1,1},{1,0}};
   int ans1=fib(n);
   int ans2=fibo(m);
    cout<<ans2-ans1;

}



