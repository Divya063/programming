#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){


		long long a, b, k;
		cin >> a >> b >> k;
		long long num;
		long long diff=a-b;
		
		long long result1=0;
		if(k%2!=0){
			result1=(k/2)*(diff)+a; 
		}
		else{
			result1= (k/2)*diff;
		}
    	
    	
cout << result1<<endl;
	}

}