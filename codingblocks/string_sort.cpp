#include<bits/stdc++.h>

using namespace std;



bool compare(string a, string b){
  int n1=a.length();
  int n2=b.length();
  if(n1<n2){
    if(a==b.substr(0, n1)){
      return b>a;
    }
  }
  
  else if(n1>n2){
    
     if(b==a.substr(0, n2)){
      return b<a;
    }
  }
  return  a<b;
    
    
  }
  int main(){
  
  int t;
  cin >> t;
  string arr[t];
  for(int i=0;i<t;i++){
    
    cin >> arr[i];
  }
  
  sort(arr, arr+t, compare);
  for(int i=0;i<t;i++){
    cout << arr[i] <<endl;
  }
  
	return 0;
}
	


