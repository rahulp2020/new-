#include<iostream>
using namespace std;
long long powercall(long long a,long long b,long long c)
{
     if(b==0)
    {

        return 1;

    }
     if(b%2==0)
     {
         return powercall((a*a)%c,b/2,c);

     }
       else {
        return ((a%c)*(powercall((a*a)%c,b/2,c)))%c;
       }

}
long long boringfac(int n, int p)
{
    long long bigans=1;
     int i=1;
       while((n+i)!=(p-1)){


           bigans=bigans*(powercall(n+i,p-2,p))%p;
            i++;

       }

       return bigans;


}
int main()
{
    int t;
    cin>>t;
     while(t--)
     {
         int n,p;
         cin>>n>>p;
          if(n>=p)
          {
            cout<<0<<endl;
              continue;
          }
         long long ans=boringfac(n,p);

            cout<<(ans+p)%p<<endl;

     }

}

