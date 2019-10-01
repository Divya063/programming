#include<bits/stdc++.h>

using namespace std;


int main(){
int num =5;
for(int i=1;i<=num;i++){
	for(int k=1;k<=num-i;k++){
		cout << " ";
	}
	for(int j=1;j<=(2*i-1)/2;j++){
		cout << j;
	}
	for(int j=(2*i-1)/2-1;j>0;j--){
		cout << j;
	}

	for(int k=0;k<num-i;k++){
		cout << " ";
	}

	cout << endl;

}
}