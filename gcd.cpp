#include<iostream>
using namespace std;

class triplet{
    public:
       int gcd;
       int x;
       int y;
};
triplet extendedgcd(int a, int b)
{

    if(b==0)
    {
        triplet ans1;
         ans1.gcd=a;
         ans1.x=1;
         ans1.y=0;
         return ans1;

    }

    triplet ans=extendedgcd(b,a%b);

        triplet ans1;
         ans1.gcd=ans.gcd;
          ans1.x=ans.y;
          ans1.y=ans.x-(a/b)*ans.y;

           return ans1;

}

int main()
{
    int a=16;
    int b=10;
    triplet myans=extendedgcd(a,b);
     cout<<myans.gcd<<endl;
     cout<<myans.x<<endl;
      cout<<myans.y<<endl;

}

