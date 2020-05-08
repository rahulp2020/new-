#include<iostream>
using namespace std;
typedef long long ll;

int main(){
	// Write your code here'
       ll t;
        cin>>t;
   int* prime=new int[1000001];
    for(int i=0; i<=1000000; i++)
    {
      prime[i]=0;
    }

      for(int i=2; i<=1000000; i++)
      {
            if(prime[i]==0)
            {
                        prime[i]=1;
                   for(int j=2*i; j<=1000000; j+=i)
                         {
                            prime[j]++;
                         }
            }
      }
     int primetable[11][1000001];
           for(int i=1; i<=10; i++)
           {
              primetable[i][0]=0;
           }
        for(int i=1; i<=10; i++)
        {
          for(int j=1; j<=1000000; j++)
          {
            if(prime[j]==i)
            {
               primetable[i][j]=primetable[i][j-1]+1;
            }
              else
              {
                primetable[i][j]=primetable[i][j-1];
              }
          }
        }
          while(t--)
          {
              ll a,b,n;
             cin>>a>>b>>n;
            cout<<primetable[n][b]-primetable[n][a-1]<<endl;

          }


	return 0;
}
