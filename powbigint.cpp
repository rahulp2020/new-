#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int modinverse(int a, int b, int c)
{
    if(b==0)
    {

        return 1;

    }
     if(b%2==0)
     {
         return modinverse((a*a)%c,b/2,c);

     }
       else {
        return ((a%c)*(modinverse((a*a)%c,b/2,c)))%c;
       }

}
int main()
{
    int a,b,c;
     cin>>a>>b>>c;

      cout<<modinverse(a,b,c)<<endl;


}
