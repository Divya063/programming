#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long n;
	cin >> n;
	int count=0;
	long long size=n/2;
	long long arr[size];
	int min =0;
	for(long long i=0;i<size;i++){
		cin >> arr[i];
		if(arr[i]==2){
			count++;
		}
		if(count>=1){
			if(min<i){
				min=i;
			}
		}
	}
	long long arr1[n]={0};
	for(long long j=0;j<size;j++){

		if(arr[j]%2==0 && arr[j]!=2){

			arr1[j]=arr[j]%2;
			arr1[n-j-1]=arr[j]%2;
		}
		else if(count>=1){

			if(j==min){
				arr1[j]=0;
				arr[n-j-1]=2;
			}
		}
		else{

			int num=arr[j]%2;
			int sub = arr[j]-num;
			if(num>sub){
				arr1[j]=sub;
				arr1[n-j-1]=num;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << arr1[i] << " ";
	}

}