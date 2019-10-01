#include<bits/stdc++.h>

using namespace std;

int fact;

int factorial(int n){

	if(n==0)
		return 1;

	fact=n*factorial(n-1);

	return fact;

}


int main(){
	
	int n1;
	cin >> n1;

	cout << factorial(n1);

}