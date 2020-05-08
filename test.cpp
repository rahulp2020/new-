#include <bits/stdc++.h>
#include<string>
using namespace std;

int alpha_code(int * input, long long size)
{
  int * arr=new int[size+1];
     arr[0]=1;
    arr[1]=1;
      for(int i=2; i<=size; i++)
      {
        arr[i]=arr[i-1];
        if(input[i-2]*10 + input[i-1]<=26)
        {
          arr[i]+=arr[i-2];
        }
      }
       int output=arr[size];
          delete [] arr;
       return output;

}

int main()
{
        string s;
        cin>>s;
        long long len=s.size();
      int * arr1=new int[len];
     for(int i=0; i<len; i++)
     {
        arr1[i]=s[i]-48;
     }
       cout<<alpha_code(arr1,len);



    return 0;
}
