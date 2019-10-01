#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

void max_heapify(int *arr, int size, int index){

	while(index<=size){
		int left_index = 2*index+1;
		int right_index = 2*index+2;
		if(left_index >= size)
			break;
		int largest_index = left_index;
		if(arr[right_index] < size && arr[left_index] < arr[right_index])
			largest_index = right_index;

		if(arr[index]<arr[largest_index]){
			swap(arr[index], arr[largest_index]);
			index = largest_index;
		}

		else
			break;

		
}

}

int heap_remove(int *arr, int size){

	int max= arr[0];
	arr[0] = arr[size-1];
	max_heapify(arr, size-1, 0);
	return max;
}



void build_heap(int *arr, int size){

	for(int i = size/2; i>=0; i--){
		max_heapify(arr, size, i);
	}
}





int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){
	ll a, b, c;
	cin >> a >> b >> c;
	int arr[c];
	for(int i =0; i<c; i++){
		cin >> arr[i];
	}

	build_heap(arr, c);
	cout << arr[0] << " ";
	int num = heap_remove(arr, c);
	cout << num;


}

return 0;
}

