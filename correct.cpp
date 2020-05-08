#include<iostream>
#define MAX 1000000
using namespace std;
typedef long long ll;
void cubfree(int Cubefree[], int max)
{
  for(int i=2; i*i*i<=max; i++)
  {
    if(Cubefree[i]==0)
    {
      for(int j=i*i*i; j<=max; j+=i*i*i)
      {
        Cubefree[j]=-1;
      }
    }
  }
      ll count=1;
    for(int i=1; i<=max; i++)
    {
        if(Cubefree[])
        Cubefree[i]=count;
           count++;
    }

}
int main(){
	// Write your code here
	 int t;
      cin>>t;
      int Cubefree[MAX+1];
      cubfree(Cubefree,MAX+1);
     for(int i=1; i<=t; i++)
     {
         int n;
         cin>>n;
         if(Cubefree[n]==-1)
         {
            cout<<"not cube free"<<endl;
         }
           else
           {
             cout<<Cubefree[n]<<endl;
           }
     }

	return 0;
}
