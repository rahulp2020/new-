#include <iostream>
#include<string>
#define r 3
#define c 3
using namespace std;

void helper(string dic[r][c], string output[r], int m, int n)
{
    output[m]=dic[m][n];
    if(m==r-1)
    {
        for(int j=0; j<r; j++)
        {
            cout<<output[j]<<" ";
        }
          cout<<endl;
          return ;
    }
      for(int k=0; k<c; k++)
      {
          if(dic[m+1][k]!="")
          {
              helper(dic,output,m+1,k);
          }
      }
}
void print(string dic[r][c])
{
    string output[r];
    for(int i=0; i<c; i++)
    {
        if(dic[0][i]!="")
        {
          helper(dic,output,0,i);
        }
    }
}
int main() {
	// your code goes here
	
	string dic[r][c]={{"i","love","you"},
	                    {"prity","mona","lona"},
	                    {"placement","lagegi"}};
	                     
	                     
	                     print(dic);
	                    
                          	                 
	return 0;
}
