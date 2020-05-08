#include<iostream>
using namespace std;

int main(){
	// Write your code here'
   int* prime=new int[12];
    for(int i=0; i<=11; i++)
    {
      prime[i]=0;
    }

      for(int i=2; i<=11; i++)
      {
            if(prime[i]==0)
            {
                      prime[i]=1;
                   for(int j=2*i; j<=11; j+=i)
                         {
                            prime[j]++;
                         }
            }
      }
         for(int i=0; i<=11; i++){
            cout<<prime[i]<<" ";
         }
         int   primetable[12][3];
             for(int i=1; i<=11; i++)
             {
                 for(int j=1; j<=2; j++)
                 {

                     primetable[i][j]=0;
                 }

             }

           for(int i=1; i<=11; i++)
             {

                 for(int j=1; j<=2; j++)
                 {


                 }

             }




	return 0;
}
