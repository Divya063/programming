#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

	ll n;
	cin >> n;
	map<int> arr;
	int arr1[n];
	int num, num1, num2;
	for(int i=0;i<n;i++){

		cin >> num;
		arr1[i]=num;
		arr.insert(num);
	}
	
	for(int i=0;i<n-1;i++){
		cin >> num1;
		if(arr.find(num1)== arr.end()){
			cout << num1 <<endl;
			break;
		}
	}

	for(int i=0;i<n-2;i++){
		cin >> num2;
		if(arr.)
	}


}