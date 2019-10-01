#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long n, s;
	cin >> n >> s;

	long long coins[n];
	for(long long i=0;i<n;i++){

		coins[i]=i+1;
	}



	int c=0;


    for (long long i=n-1; i>=0; i--) 
    { 
        while (s >= coins[i]) 
        { 
           s-= coins[i]; 
          c++;
        } 
    } 
cout << c ;


} 

