#include<bits/stdc++.h>

using namespace std;


int main(){

	int t;
	cin >> t;
	while(t--){

		int a, b, count=0;
		cin >> a >> b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}

		sort(arr, arr+a, greater<>());

		for(int i=0;i<a;i++){
			if(arr[i]>=arr[b-1]){
				count=count+1;
			}
		}

		cout << count <<endl;
	}
	


}