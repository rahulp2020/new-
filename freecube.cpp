#include<iostream>
using namespace std;
typedef long long ll;
ll freecube(ll n)
{
  bool cubefree[n+1];
     ll count=0;
   for(int i=0; i<=n; i++)
   {
      cubefree[i]=true;
   }
    for(int i=2; i*i*i<=n; i++)
    {
      if(cubefree[i])
      {
        for(int j=1; i*i*i*j<=n; j++)
        {
            cubefree[i*i*i*j]=false;
             count++;
        }
      }
    }
      if(cubefree[n]==false)
      {
          return n;

      }
          return count;
}
int main(){
	ll t;
   cin>>t;
  while(t--)
  {
    ll  n;
    cin>>n;

     ll  ans=freecube(n);
        if(ans==n)
        {
            cout<<"not free cube"<<endl;
               continue;

        }
        cout<<n-ans<<endl;

  }
	return 0;
}
