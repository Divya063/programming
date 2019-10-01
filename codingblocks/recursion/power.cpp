#include<bits/stdc++.h>

using namespace std;

int cnt =0;

int power(int a, int b){

	cnt++;
	if(b==1)
		return a;

	a = a * power(a, b-1);
	return a;

}


int main(){
	
	int a, b;
	cout << power(8,10) << endl;
	cout << cnt;

}