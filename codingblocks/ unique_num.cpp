#include<bits/stdc++.h>

using namespace std;


void unique_numbers(int arr[], int size){

		for(int i=0;i<size;i++){

			int j=0;
			int count[64]={0};
			int num = arr[i];
			while(num>0){
				count[j]+=num&1;
				j++;
				num=num >> 1;
			}
		}

		int p=1;
		int ans=0;
		for(int i=0;i<size;i++){

			count[i]=count[i]%3;
			ans+=count[i];
			p=p<<1;


		}

		cout << ans;

}



int main(){
	
	int arr[7]={3,3,4,5,6,2,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	unique_numbers(arr, size);


}