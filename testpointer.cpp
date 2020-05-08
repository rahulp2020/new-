#include<iostream>
using namespace std;
void increamentpointer(int *p)
{
	p=p+1;
}
void increament(int * p)
{
   *p=*p+1;
}
int func(int * b, int size)
{
	return sizeof(b);
}
int main()
{
       int a=10;
       a++;
       int *p=&a;
       cout<<p<<endl;
       increamentpointer(p);
       cout<<p<<endl;
       cout<<*p<<endl;
       increament(p);
       cout<<*p<<endl;
       int b[10];
       cout<<sizeof(b)<<endl;
       cout<<func(b,10)<<endl;
       int c=10;
       int * pt=&c;
       cout<<sizeof(pt)<<endl;
}
