#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main(){

	ll arrival[]={1,2,3,5,3};
	ll departure[]={5,5,5,5,5};
	int n = sizeof(arrival)/sizeof(arrival[0]); 

	//sort(arrival, arrival+n); 
   	//sort(departure, departure+n); 
  
   int chair=1, res=0; 
   int i = 1, j = 0; 
   while (i<n && j<n) 
   { 
      if (arrival[i]<=departure[j]) 
      { 
          chair++; 
          i++; 
 
          if (chair > res)  
              res=chair; 
      } 
  
      else
      { 
          chair--; 
          j++; 
      } 
   } 
  
   cout << res; 
} 
  
    