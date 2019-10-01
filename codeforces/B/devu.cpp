#include<bits/stdc++.h>


using namespace std;
#define ll long long


int main(){
	
	ll n , k;
	cin >> n >> k;
	ll arr[n];
	for(ll i=0;i<n;i++){

		cin >> arr[i];
	}
	ll sum=0;
	sort(arr, arr+n);
	for(ll i=0;i<n;i++){

		sum=sum+ (arr[i]*k);
		if(k-1<=0){

			k=1;
		}
		else
			k=k-1;
	}
	cout << sum <<endl;

}