#include <bits/stdc++.h>

using namespace std;

#define MAX 100005


int tree[MAX] = {0};  // To store segment tree
int lazy[MAX] = {0};  // To store pending updates

void construct(int arr[], int start, int end, int pos){

	if(start==end){
		// leaf node
		tree[pos]=arr[start];

	}

	int mid= (start+end)/2;
	construct(arr, start, mid, 2*pos+1);
	construct(arr, mid+1, end, 2*pos+2);
	tree[pos]= tree[2*pos+1]+ tree[2*pos+2];
}

void query()

int main(){


}