#include<bits/stdc++.h>

using namespace std;


int main(){
	
int n;
cin >> n;
int k=n;

for(int i=0;i<n;i++){

	for(int j=0;j<n-i-1;j++){

		cout << "*";
	}
	cout << k;
	k--;
	cout << endl;
}




}