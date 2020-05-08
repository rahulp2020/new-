#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	 int * ai=new int[750001];
     int * af=new int[750001];
           ll t;
          cin>>t;
        while(t--)
        {
           for(int i=1; i<=750000; i++)
        {
          ai[i]=0;
          af[i]=0;

        }
          ll n;
           cin>>n;
           for(int i=1; i<=n; i++)
           {
               cin>>ai[i];
                 af[ai[i]]=1;
           }
          sort(ai+1,ai+n+1);
          reverse(ai+1,ai+n+1);
          for(int i=1; i<=n; i++)
          {
               int j=ai[i];
            for(int k=2*j; k<=n; k+=j)
            {
                if(af[k]!=0){
                  af[k]+=af[j];
                }
            }
          }
            int sum=0;
           for(int i=1; i<=750000; i++)
           {
              if(af[i]!=0)
              {
                sum=(sum%MOD+(af[i])%MOD)%MOD;
              }
           }
             cout<<sum%MOD<<endl;
        }


	return 0;
}
