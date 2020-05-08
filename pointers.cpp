#include<iostream>
using namespace std;


void uodatevalue(int*p)
{
    *p=610%255;

}
int main()
{
   // int *ptr = 0;
//int a = 10;
//*ptr = a;
// cout << *ptr << endl;

// int a[6] = {1, 2, 3};
//int *b = a;
//cout << b[2];
//char s[]="abc";
//char*p=s;
//cout<<s[0]<<" "<<p[0];
  char ch='A';
  uodatevalue((int*)&ch);
  cout<<ch;
}
