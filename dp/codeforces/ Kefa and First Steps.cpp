#include<bits/stdc++.h>

using namespace std;


int main(){


	int n,count=0, count1=0;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){

		cin >> arr[i];
	}

	for(int i=1;i<n;i++){

		if(arr[i-1]<arr[i]){
			count=count+1;
		}
		if(arr[i-1]>arr[i]){
			if(count>count1)
			count1=count;
			count=0;
			break;
		}



	}

	cout << count1;
	


}