#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){

		cin >> arr[i];
	}	
	int sum =0;
	sort(arr, arr+n);
	int i=0;
	while(i<=n-2){
		sum = sum+(arr[i+1]-arr[i]);
		i=i+2;

	}
	cout << sum ;

}