#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

		int n;
		float x, k, d;
		float sum=0;
		cin >> n >> k >> x >>d;

		int arr[n];

		for(int i=0;i<n;i++){

			cin >> arr[i];
			float n= max(k, (x*arr[i])/100);
			sum=sum+n;			

		}

		if(sum>d){
			cout << "upfront" <<endl;
		}
		else if(sum<d){

			cout << "fee" <<endl;
		}
		else{

			cout << "fee" <<endl;
		}

		
	}
}