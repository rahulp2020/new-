#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
      cin>>t;
   int* a=new int[50001];
   while(t--)
   {

       int m,b,c,n;
       cin>>m>>b>>c>>n;

         int ans=(m*10+b);
        int r;
             for(int i=2; i<=(n-1); i++)
             {
               a[i]=(a[i-1]*c+ a[i-2])%10;
                   r=ans%41;
                  ans=r*10+a[i];
             }
           if(ans%41==0)
           {
             cout<<"YES"<<endl;
           }
         else
         {
             cout<<"NO"<<endl;
         }


   }
    return 0;
}
