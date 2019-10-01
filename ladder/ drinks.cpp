#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){

		cin>> arr[n];

	}

	for(int i=0;i<n;i++){
		sum=sum+(arr[i]/100);

	}
	cout << (sum/n)*100;
	


}