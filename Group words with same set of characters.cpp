#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<unordered_map>
#include<iterator>
using namespace std;

int main() {
	// your code goes here
	 string s[]={"may", "student", "students", "dog", 
                 "studentssess", "god", "cat", "act", "tab", 
                 "bat", "flow", "wolf", "lambs", "amy", "yam", 
                 "balms", "looped", "poodle"};
	 std::string::iterator it;
	 int n=sizeof(s)/sizeof(s[0]);
	 unordered_map<string,vector<int>> store;
	 for(int i=0; i<n; i++)
        	 {
    	       string temp="";
    	       temp=s[i];
    	       sort(temp.begin(),temp.end());
    	      store[temp].push_back(i);
          	 }
          	  // map<string,vector<int>>:: iterator itr;
          	   for(auto itr=store.begin(); itr!=store.end(); itr++)
          	   {
          	       for(auto it=(*itr).second.begin(); it!=(*itr).second.end(); it++)
          	       {
          	           cout<<s[*it]<<",";
          	       }
          	         cout<<endl;
          	   }
	return 0;
}
