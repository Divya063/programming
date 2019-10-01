#include<bits/stdc++.h>

using namespace std;

int ans;

int memo[10000];

int steps(int n){

	if(n==0)
		return 1;
	if(n<0)
		return 0;
	if(memo[n])
		return memo[n];

	memo[n]= steps(n-1)+steps(n-2)+steps(n-3);
	return memo[n]; //do this
}


int main(){

	int num;
	cin >> num;
	
	cout <<steps(num);

}