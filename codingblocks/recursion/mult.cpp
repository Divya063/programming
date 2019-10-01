#include<bits/stdc++.h>

using namespace std;

int mult(int a, int b){

	if(b==1)
		return a;
	a=a+mult(a, b-1);
	return a;
}


int main(){
	
	cout << mult(12,12);


}