#include<iostream>
using namespace std;

int main()
{
  //int t;
  // cin>>t;
  // while(t--)
 //  {
     int R,C;
      cin>>R>>C;
      int ** input=new int*[R];
       for(int i=0; i<R; i++)
       {
         input[i]=new int[C];
           for(int j=0; j<C; j++)
           {
             cin>>input[i][j];
           }
       }

          //long long myans=Magicgrid(input,R,C);
         // cout<<myans<<endl;
  // }
           for(int i=0; i<R; i++)
           {
               for(int j=0; j<C; j++)
               {

                   cout<<input[i][j];
               }
                  cout<<endl;

           }


    return 0;
}
