#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	int arr[n];
	for(int i=0;i<n;i++){

		cin >> arr[i];
	}
	int count=0;
	arr<int, n> arr1=arr;
	sorted(arr1, arr1+n);

	for(int i=0;i<n;i++){

		arr[0]=arr[n-1];
		count++;
		if(equal(begin(arr), end(arr), begin(arr1))){
			cout << count;
			break;

		}
	}

}