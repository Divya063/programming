#include<bits/stdc++.h>

using namespace std;


int temp[1000];

void merge(int arr[], int s, int e){

	int mid = (s+e)/2;

	int i = s;
	int j = mid+1;
	int k = s;

	while(i<=mid && j<=e){

		if(arr[i]<=arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];

		while(i<=mid)
			temp[k++]= arr[i++];
		while(j<=e)
			temp[k++] = arr[j++];
	}

	for(int i =0;i<e;i++){
		arr[i]=temp[i];
	}

}


void mergeSort(int arr[], int s, int e){
	if(s>=e)
		return;

	int mid = (s+e)/2;

	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, e);

	merge(arr, s, e);



}



int main(){

	int arr[6] ={3, 6, 2, 8, 1, 7};

	mergeSort(arr, 0, 6); 

	for(int i =0;i<6;i++)
		cout << arr[i] << " ";


}