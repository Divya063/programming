#include<bits/stdc++.h>

using namespace std;


int partition(int *arr, int s, int e){

	int i = s-1;
	int j = s;
	int pivot = arr[e];
	for(;j<e;j++){

		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}


	}

	swap(arr[i+1], arr[e]);
	return i+1;
}

void quickSort(int *arr, int s, int e){

	if(s>=e)
		return;
	int p = partition(arr, s, e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e); 

}



int main(){
	int arr[]= {8,5,9,6,4,1,5,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, size-1);
	for(int i=0;i<size;i++){

		cout << arr[i] << " ";
	}


}