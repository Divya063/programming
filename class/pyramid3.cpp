#include<bits/stdc++.h>

using namespace std;


int main(){
int num =4;
for(int i=1;i<=num;i++){
	for(int k=1;k<=num-i;k++){
		cout << " ";
	}
	for(int j=1;j<=2*i-1;j++){
		cout << "*";
	}

	for(int k=0;k<num-i;k++){
		cout << " ";
	}

	cout << endl;

}
}