#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
      int ans=gcd(b,a%b);
          
      return ans;
}
class triple
{
  public:
  int gcd;
  int x;
  int y;
};
triple gcd_modulo(int a, int b)
{
     if(b==0)
     {
          triple ans;
         ans.gcd=a;
         ans.y=0;
         ans.x=1;
          return ans;
     }
    triple myans=gcd_modulo(b,a%b);
    triple ans;
    ans.gcd=myans.gcd;
    ans.x=myans.y;
    ans.y=(myans.x-(a/b)*myans.y);
      return ans;
}
int modulo_inverse(int a, int m)
{
    int ans;
    ans=gcd_modulo(a,m).x;
    return ans;
}
int main() {
	// your code goes here
	int a=12;
	int b=5;
	 triple myans=gcd_modulo(a,b);
	 int g=gcd(a,b);
	 int inverse=modulo_inverse(a,b);
	  cout<<myans.gcd<<" "<<myans.x<<" "<<myans.y;
	  cout<<endl;
	   cout<<g;
	   cout<<endl;
	   cout<<inverse;
	return 0;
}
