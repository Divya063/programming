#include<bits/stdc++.h>

using namespace std;


struct heapnode{

	int element;
	int i;
	int j;
};

void swap(heapnode *a, heapnode *b){

	heapnode t;
	t=*a;
	 *a=*b;
	*b=t;
}


void min_heapify(heapnode A[], int i, int heap_size){

	int l=2*i+1;
	int r=2*i+2;
	int smallest;
	if(l<heap_size && A[l].element<A[i].element)
		smallest=l;
	else
		smallest=i;
	if(r<heap_size && A[r].element<A[smallest].element)
		smallest=r;
	if(smallest!=i){

		swap(&A[i], &A[smallest]);
		min_heapify(A, smallest, heap_size);
	}

}


void build_minheap (heapnode Arr[ ], int heap_size) 


    {
        for( int i = heap_size/2 ; i >= 0 ; i--)
        min_heapify (Arr, i, heap_size);
    }



int main(){

	 vector<vector<int> > arr{ { 1, 34, 90, 2000  }, 
                              { 4,5}, 
                              {6,8,9 } }; 

	int k=3;
	heapnode *harr = new heapnode[k];
	for(int i=0;i<k;i++){
		//cout<< arr[i][0];
		harr[i].element=arr[i][0];
		harr[i].i=i;
		harr[i].j=1; //next element to be accessed
	}

	int heap_size;
	heap_size=k;
	int sum=0;

	build_minheap(harr, heap_size);

	for(int i=0;i<arr.size();i++ ){

		sum=sum+arr[i].size();
	}
	int output[sum+1];
	//cout << sum << endl;
	
	for(int count=0;count<sum;count++){

		heapnode min= harr[0];
		//cout << min.element <<endl;
		output[count]=min.element;

		if(min.j<arr[min.i].size()){
			min.element=arr[min.i][min.j];
			min.j=min.j+1;
		}
		else{
			min.element=INT_MAX;
		}

		harr[0] = min;
		build_minheap(harr, heap_size);
	}

	for(int i=0;i<sum;i++){


		cout << output[i] << " ";

	}
	
}