#include<bits/stdc++.h>

using namespace std;

int tiles(int n){

	if(n==1||n==2||n==3)
		return 1;
	if(n==4)
		return 2;
	int f1 = tiles(n-1);
	int f2 = tiles(n-4);
	return f1+f2;

}


int main(){

	cout << tiles(16);
	


}