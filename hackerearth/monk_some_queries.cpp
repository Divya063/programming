#include<bits/stdc++.h>

using namespace std;




void swap(int &i, int &j){

	i = i + j;
    j = i - j;
    i = i - j;
}



void max_heapify(int A[], int i, int heap_size){

	int largest;
	int l=2*i+1;
	int r =2*i+2;

	if(l<heap_size && A[l]>A[i]){

		largest=l;
	}
	else{
		largest=i;
	}
	if(r<heap_size && A[r]>A[largest])
		largest=r;
	if(largest!=i){

		swap(A[largest], A[i]);
		max_heapify(A, largest, heap_size);

	}

}

void increase_key(int A[], int i, int key){

	A[i]=key;
	while(i>1 && A[i/2]<A[i]){
		swap(A[i/2], A[i]);
		i=i/2;
	}
}

void decrease_key(int A[], int i, int key, int heap_size){
	A[i]=INT_MIN;
	max_heapify(A, i, heap_size);
	heap_size=heap_size-1;
}

void insert(int A[], int key, int heap_size)

{
	A[heap_size]= INT_MIN;
	heap_size=heap_size+1;
	increase_key(A, heap_size-1, key);


}
void build_heap(int A[], int heap_size){

	for(int i=heap_size/2;i>=0;i--){

		max_heapify(A, i, heap_size);
	}

	


}

int main(){

	int m, n;
    std::cin >> m ;
 
    int* A = new int[m];
    for (int i = 0; i < m; i++)
        std::cin >> A[i];
 
	build_heap(A, 5);
	insert(A, 20, 5);
	for(int i=0;i<6;i++){
		cout << A[i] << " ";
	}

	return 0;
}