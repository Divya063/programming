#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countbits(int n){
  int count=0;
  
  while(n){
    
    n=n&(n-1);
    count++;
  }
  return count;
}

int main() {
  

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int ans=0;
    
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
      
      ans+=countbits(i);
    }
    cout << ans <<endl;
    
  }
	return 0;
}