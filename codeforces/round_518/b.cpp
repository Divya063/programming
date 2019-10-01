#include<bits/stdc++.h>

using namespace std;




int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            
            if (n / i == i) 
                cnt++; 
  
            else 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 



int main(){

	long long b;
	cin >> b;

	if(b==1){
		cout << "1";
		return 0;
	}


	cout <<countDivisors(b) <<endl;



}