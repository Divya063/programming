#include<bits/stdc++.h>

using namespace std;


int main(){
	
stack<char> map;
string A="/a/./b/../../c/";
string str="";

   int i=A.size()-2; 
   while(A[i]!='/'){
      map.push(A[i]);
       i=i-1;
       
   }
   while(!map.empty()){
   	str.push_back(map.top());
   	map.pop();
   }
  str='/'+str;
   cout << str <<endl;

}