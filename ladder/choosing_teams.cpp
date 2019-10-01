#include<bits/stdc++.h>

using namespace std;


int main(){
	int n, k, count=0, count1=0;
	cin>> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];

	}

	for(int i=0;i<n;i++){
		arr[i]=arr[i]+k;
	}
	for(int i=0;i<n;i++){
		if(arr[i]<=5){
			count++;
		}
		if(count==3){
			count1++;
			count=0;
		}

	}

	cout << count1 <<endl;
	


}