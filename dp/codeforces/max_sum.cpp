#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){

		cin >> arr[i];
	}

	for(int i=0;i<n;i++){
		if(arr[i]==0){
			arr[i]=1;
		}
		else
			arr[i]=-1;
	}

	for(int i=0;i<n;i++){

		cout <<  arr[i] << " ";
	}


	int startindex=0, endindex=0, max_so_far= INT_MIN , sumtillhere=0;
	int s=0, count=0;

	for(int i=0;i<n;i++){


		sumtillhere= sumtillhere+arr[i];

		if(max_so_far<sumtillhere){
			max_so_far=sumtillhere;
			startindex=s;
			endindex=i;
		}

		if(sumtillhere<0){
			sumtillhere=0;
			s=s+1;
		}
	}

for(int i=startindex;i<=endindex;i++){

	if(arr[i]==1){

		count=count+1;
	}

}

cout << count <<endl;

}