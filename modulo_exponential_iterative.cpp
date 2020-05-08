#include <iostream>
using namespace std;
int modulo_exponential(int a, int b, int c)
{
    if(b==0)
    {
        return 1;
    }
     if(b%2==0)
     {
         return modulo_exponential((a*a)%c,b/2,c);
     }
     else 
     {
         return ((a%c)*modulo_exponential((a*a)%c,b/2,c))%c;
     }
}
int modulo_exponential_iterative(int a, int y, int c)
{
     int result=1;
      a=a%c;
    while(y>0)
    {
       // y=y%c;
        if((y&1)==1)
        {
            result=(result*a)%c;
         }
         a=(a*a)%c;
            y=y/2;
    }
       return result; 
}
int main() {
	// your code goes here
	int a=2;
	int b=5;
	int c=5;
	cout<<modulo_exponential(a,b,c)<<endl;
	cout<<modulo_exponential_iterative(a,b,c);
	return 0;
}
