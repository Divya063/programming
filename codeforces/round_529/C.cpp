#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	
	ll n ,k;
	cin >> n >> k;
	ll arr[k];
	for(ll i=0, pos=0;i<k;i++, pos++){
		arr[i]=1<<pos;
	}
	ll m = sizeof(arr)/sizeof(arr[0]);
	if(n%k==0){
		cout << "YES";
	}
	


}