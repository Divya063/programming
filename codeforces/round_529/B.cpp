#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	if(n==2){
		cout << 0;
		return 0;
	}
	else if(count(arr, arr + n, arr[n-1])==n-1){
		cout << 0;
	}
	else
	cout << min(arr[n-2]-arr[0], arr[n-1]-arr[1]);
}